#include <iostream>

void prime(int n, int div)
{
	if (div >= 2)
	{
		if (n % div == 0)
		{
			std::cout << "composite";
		}
		else
		{
			return prime(n, div - 1);
		}
	}
	else
	{
		std::cout << "prime";
	}
}

int main(int argc, char* argv[])
{
	int n = 0;
	int d = 0;
	
	std::cin >> n;

	d = n - 1;
	prime(n, d);
	return EXIT_SUCCESS;
}