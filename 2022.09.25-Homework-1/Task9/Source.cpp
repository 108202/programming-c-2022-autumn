#include <iostream>

int main(int argc, char* argv[])
{
	int x = 0;
	int y = 0;
	std::cin >> x;
	y = x * x;
	std::cout << ( y + 1 ) * ( y + x ) + 1 << std::endl;
	return EXIT_SUCCESS;
}