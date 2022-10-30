#include <iostream>

int main(int argc, char* argv[])
{
	int number = 0;
	std::cin >> number;
	std::cout << number + 2 - ( number % 2 ) << std::endl;
	return EXIT_SUCCESS;
}