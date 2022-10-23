#include <iostream>

int main(int argc, char* argv[])
{
	int number = 0;
	std::cin >> number;
	std::cout << number % 10 + (number / 10) % 10 + number / 100 << std::endl;
	return EXIT_SUCCESS;
}