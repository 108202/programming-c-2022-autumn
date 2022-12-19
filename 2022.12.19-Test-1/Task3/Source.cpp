#include <iostream>

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int i = 0;
	int j = 0;
	int k = 0;

	b = 1;

	std::cin >> i >> j;

	for (k = 0; k < i; k++)
	{
		a = b;
		b = c;
		c = a + b;
	}

	a = 0;
	b = 1;

	for (k = 0; k < j; k++)
	{
		a = b;
		b = d;
		d = a + b;

	}

	while (c != 0 and d != 0)
	{
		if (c > d)
		{
			c %= d;
		}
		else
		{
			d %= c;
		}
	}


	std::cout << d + c;
	return EXIT_SUCCESS;
}