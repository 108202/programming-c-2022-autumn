#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int i = 0;
	int k = 0;
	int a[1000]{ 0 };

	std::cin >> n;

	for (i = 0; i < n; i++)
	{
		std::cin >> a[i];
	}

	std::cin >> k;

	for (i = k - 1; i < n; i++)
	{
		std::cout << a[i] << " ";
	}
	for (i = 0; i < k - 1; i++)
	{
		std::cout << a[i] << " ";
	}
	return EXIT_SUCCESS;
}