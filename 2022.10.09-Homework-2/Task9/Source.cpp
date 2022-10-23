#include <iostream>

int main(int argc, char* argv[])
{
	int M = 0;
	int N = 0;
	int x = 0;
	int y = 0;

	std::cin >> M;
	std::cin >> N;
	std::cin >> x;
	std::cin >> y;

	if (x > M or y > N)
	{
		std::cout << "Specified coordinates outside the table";

	}
	else if (N == M == x == y == 1)
	{
		std::cout << "(" << x << "," << y << ")";

	}
	else
	{
		if (M > 1)
		{
			if (x == 1)
			{
				std::cout << "(" << x + 1 << "," << y << ")";

			}
			else if (x == M)
			{
				std::cout << "(" << x - 1 << "," << y << ")";

			}
			else
			{
				std::cout << "(" << x - 1 << "," << y << ")";
				std::cout << "(" << x + 1 << "," << y << ")";

			}

		}
		if (N > 1)
		{
			if (y == 1)
			{
				std::cout << "(" << x << "," << y << ")";

			}
			else if (y == N)
			{
				std::cout << "(" << x << "," << y - 1 << ")";

			}
			else
			{
				std::cout << "(" << x << "," << y - 1 << ")";
				std::cout << "(" << x << "," << y + 1 << ")";

			}

		}
	}
	return EXIT_SUCCESS;
}