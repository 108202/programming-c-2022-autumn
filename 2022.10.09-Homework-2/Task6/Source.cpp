#include <iostream>

int main(int argc, char* argv[])
{
	int x1 = 0;
	int y1 = 0;
	int x2 = 0;
	int y2 = 0;

	std::cin >> x1;
	std::cin >> y1;
	std::cin >> x2;
	std::cin >> y2;

	if (x1 - x2 == y1 - y2 or x1 - x2 == y2 - y1 or x2 - x1 == y1 - y2 or x2 - x1 == y2 - y1 or x1 == x2 or y1 == y2)
	{
		std::cout << "YES";

	}
	else
	{
		std::cout << "NO";

	}
	return EXIT_SUCCESS;
}