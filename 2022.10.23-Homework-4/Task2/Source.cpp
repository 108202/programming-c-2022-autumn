#include <iostream>

int main(int argc, char* argv)
{
	int n = 0;
	int n1 = 0;
	int i = 0;
	int a = 0;
	int b = 1;

	std::cin >> n;

	for (i = 0; i <= n*10; i++)
	{
		a = n % 10;
		n1 += a * b;
		b *= 2;
		n /= 10;
		if (n == 0)
		{
			break;
		}
	}
	std::cout << n1;
	return EXIT_SUCCESS;
}