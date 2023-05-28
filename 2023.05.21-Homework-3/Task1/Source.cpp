#include <iostream>
using std::swap;

struct Point
{
	int x;
	int y;

	Point() :
		x(0), y(0) {};

	Point(int x = 0, int y = 0):
		x(x), y(y) {};

	Point(const Point& p) :
		x(p.x), y(p.y) {};

	float Dist()
	{
		return sqrt(x * x + y * y);
	}

	void wPoint()
	{
		std::cout << x << " " << y << "\n";
	}

	~Point() 
	{};
};

int main(int argc, char* argv[])
{
	int n = 0;
	int x = 0;
	int y = 0;
	int i = 0;
	int j = 0;

	std::cin >> n;

	Point* c;
	c = (Point*)calloc(n, n * sizeof(Point));

	for (i = 0; i < n; i++)
	{
		std::cin >> x >> y;
		if (c != nullptr)
		{
			c[i] = Point(x, y);
		}
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n - 1; j++)
		{
			if (c != nullptr)
			{
				if (c[j].Dist() > c[j + 1].Dist())
				{
					swap(c[j], c[j + 1]);
				}
			}
		}

	}

	std::cout << "\n";

	for (i = 0; i < n; i++)
	{
		if (c != nullptr)
		{
			c[i].wPoint();
		}
	}

	free(c);
		 
	return EXIT_SUCCESS;
}