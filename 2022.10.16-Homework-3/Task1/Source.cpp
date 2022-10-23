#include <iostream>

int main(int argc, char* argv)
{
	int a = 0;
	int b = 0;

	std::cin  >> a >> b;

	while (b - a != -1)
	{
		std::cout << a << " " ;
		a += 1;

	}
	return EXIT_SUCCESS;
}