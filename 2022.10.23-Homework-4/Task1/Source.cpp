#include <iostream>

int main(int argc, char* argv)
{
	int x = 0;
	int k = 0;
	int i = 0;
	int a = 0;
	
	std::cin >> x;

	for (i = 1; i*i <= x; i++)
	{
		if (x % i == 0)
		{
			k += 1;
		}
		if (i * i == x)
		{
			a = i * i;
		}
	}

	if (a == x)
	{
		std::cout << 2 * k - 1;
	}
	else
	{
		std::cout << 2 * k;
	}
	return EXIT_SUCCESS;
}