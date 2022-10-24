#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int k = 0;

	std::cin >> n;

	while (n != 0)
	{
		if ((n % 2 != 0) and (n < 0))
		{
			k += 1;
		}
		std::cin >> n;
	}

	std::cout << k;
	return EXIT_SUCCESS;
}