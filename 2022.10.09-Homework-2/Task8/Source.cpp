#include <iostream>

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;

	std::cin >> a;
	std::cin >> b;
	std::cin >> c;

	if (a + b <= c or a + c <= b or c + b <= a)
	{
		std::cout << "impossible";

	}
	else
	{
		if (a * a + b * b == c * c)
		{
			std::cout << "right";

		}
		else if (a * a + b * b < c * c)
		{
			std::cout << "acute";

		}
		else if (a * a + b * b > c * c)
		{
			std::cout << "obtuse";

		}
	}
	return EXIT_SUCCESS;
}