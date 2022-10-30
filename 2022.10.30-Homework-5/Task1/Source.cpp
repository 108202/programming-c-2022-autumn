#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int x = 0;
	int i = 0;
	int k = 0;
	int a[1000] {0};

	std::cin >> n;

	for (i = 0; i < n; i++)
	{
		std::cin >> a[i];
	}

	std::cin >> x;

	for (i = 0; i < n; i++)
	{
		if (a[i] == x)
		{
			k += 1;
		}
	}

	std::cout << k;
	return EXIT_SUCCESS;
}