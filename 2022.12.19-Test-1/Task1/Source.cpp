#include <iostream>

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	
	std::cin >> a;

	a = a / 10;
	b = a + 1;
	a = a * b;

	if (a == 0)
	{
		std::cout << "25";
	}
	else
	{
		std::cout << a << "25";
	}
	return EXIT_SUCCESS;
}