#include <iostream>

int main(int argc, char* argv[])
{
	int v = 0;
	int t = 0;
	int s = 109;
	std::cin >> v;
	std::cin >> t;
	std::cout << (v * t) % s + s << std::endl;
	return EXIT_SUCCESS;
}