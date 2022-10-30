#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int i = 0;
	int cout_max = 0;
	int a[1000]{ 0 };

	std::cin >> n;

	for (i = 0; i < n; i++)
	{
		std::cin >> a[i];
	}

	for (i = 0; i < n; i++)
	{
		if (a[i - 1] + a[i] + a[i + 1] > cout_max)
		{
			cout_max = a[i - 1] + a[i] + a[i + 1];
		}
	}
	std::cout << cout_max;
	return EXIT_SUCCESS;
}