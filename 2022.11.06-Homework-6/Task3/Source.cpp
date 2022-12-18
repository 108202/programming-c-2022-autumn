#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int i = 0;
	int x = 0;
	int p = 0;
	int a[100]{ 0 };

	std::cin >> n;

	for (i = 0; i < n; i++)
	{
		std::cin >> a[i];
	}

	std::cin >> x;

	for (i = 0; i <= n; i++)
	{
		if (x <= a[i])
		{
			p = i + 2;
		}
	}

	std::cout << p;
	return EXIT_SUCCESS;
}