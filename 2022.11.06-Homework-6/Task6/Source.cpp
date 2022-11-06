#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int i = 0;
	int k3 = 0;
	int k4 = 0;
	int a[100]{ 0 };
	int a3[100]{ 0 };
	int a4[100]{ 0 };

	std::cin >> n;

	for (i = 0; i < n; i++)
	{
		std::cin >> a[i];
		if (a[i] % 2 == 0)
		{
			a4[i] = a[i];
			k4 += 1;
		}
		if (a[i] % 2 != 0)
		{
			a3[i] = a[i];
			k3 += 1;
		}
	}
	for (i = 0; i < n; i++)
	{
		if (a3[i] != 0)
		{
			std::cout << a3[i] << " ";
		}
	}

	std::cout << "\n";
	
	for (i = 0; i < n; i++)
	{
		if (a4[i] != 0)
		{
			std::cout << a4[i] << " ";
		}
	}

	std::cout << "\n";

	if (k4 < k3)
	{
		std::cout << "YES";
	}
	else
	{
		std::cout << "NO";
	}
	return EXIT_SUCCESS;
}