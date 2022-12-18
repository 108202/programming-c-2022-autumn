#include <iostream>

int main(int argc, char* argv[])
{
	int i = 0;
	int j = 0;
	int n = 0;

	std::cin >> n;

	int** a = new int*[n];
	int** b = new int* [n];

	for (i = 0; i < n; i++)
	{
		a[i] = new int[n];
	}
	for (i = 0; i < n; i++)
	{
		b[i] = new int[n];
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			std::cin >> a[i][j];
		}
	}

	std::cout << "\n";

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			b[i][j] = a[j][i];
		}
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			std::cout << b[i][j] << " ";
		}
		std::cout << "\n";
	}
	
	for (i = 0; i < n; i++)
	{
		delete[] a[i];
	}
	delete[] a;
	for (i = 0; i < n; i++)
	{
		delete[] b[i];
	}
	delete[] b;
	return EXIT_SUCCESS;
}