#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int i = 0;
	int Vmax = 0;
	int imax = 0;
	int a[1000]{ 0 };
	int b[1000]{ 0 };

	std::cin >> n;

	for (i = 0; i < n; i++)
	{
		std::cin >> a[i];
	}

	for (i = 0; i < n; i++)
	{
		std::cin >> b[i];
	}

	for (i = 0; i < n; i++)
	{
		if ((a[i]*b[i])/100 + ( a[i] * b[i] ) % 100 > Vmax)
		{
			Vmax = (a[i] * b[i]) / 100 + ( a[i] * b[i] ) % 100;
			imax = i;
		}
	}
	std::cout << imax + 1;
	return EXIT_SUCCESS;
}