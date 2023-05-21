#include <iostream>

struct shape
{
	float a;
	float b;
	float c;
	shape(float a = 0, float b = 0, float c = 0) :
		a(a), b(b), c(c) {};
	shape(const shape& s) :
		a(s.a), b(s.b), c(s.c) {};

	~shape() {};
};

struct rectangle : shape
{
	rectangle(float a = 0, float b = 0) :
		shape(a, b) {};

	float area()
	{
		return a * b;
	}

	~rectangle() {};
};

struct triangle : shape
{
	triangle(float a = 0, float b = 0, float c = 0) :
		shape(a, b, c) {};

	float area()
	{
		float perimetr = a + b + c;
		return sqrt((perimetr / 2) * (perimetr / 2 - a) * (perimetr / 2 - b) * (perimetr / 2 - c));
	}

	~triangle() {};
};

struct circle : shape
{
	float pi = 3.1415;
	circle(float a = 0) :
		shape(a) {};

	float area()
	{
		return pi * a * a;
	}

	~circle() {};
};

struct square : rectangle
{
	square(float a = 0) :
		rectangle(a, a) {};

	float area()
	{
		return a * a;
	}
};

int main(int argc, char* argv[])
{
	float a = 0;
	float b = 0;
	float c = 0;

	std::cin >> a >> b >> c;

	rectangle r = rectangle(a, b);
	std::cout << "r area: " << r.area() << "\n";

	triangle t = triangle(a, b, c);
	std::cout << "t area: " << t.area() << "\n";

	circle cir = circle(a);
	std::cout << "c area: " << cir.area() << "\n";

	square s = square(a);
	std::cout << "s area: " << s.area();


	return EXIT_SUCCESS;
}