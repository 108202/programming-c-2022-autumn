#include <iostream>

int main(int argc, char* argv[])
{
	int i = 0;
	int j = 0;
	int n = 0;
	int m = 0;
	int k = 0;
	int p = 0;

	std::cin >> n >> m >> p;
	
	int** a = new int* [n];
	int** b = new int* [m];
	int** comp = new int* [n];

	for (i = 0; i < n; i++)
	{
		a[i] = new int[m];
	}
	for (j = 0; j < m; j++)
	{
		b[j] = new int[p];
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			std::cin >> a[i][j];
		}
	}

	std::cout << "\n";

	for (j = 0; j < m; j++)
	{
		for (k = 0; k < p; k++)
		{
			std::cin >> b[j][k];
		}
	}

	for (i = 0; i < n; i++)
	{
		comp[i] = new int[m];
		for (k = 0; k < p; k++)
		{
			comp[i][k] = 0;
			for (j = 0; j < m; j++)
			{
				comp[i][k] += a[i][j] * b[j][k];
			}
		}
	}

	std::cout << "\n";

	for (i = 0; i < n; i++)
	{
		for (k = 0; k < p; k++)
		{
			std::cout << comp[i][k] << " ";
		}
		std::cout << "\n";
	}

	for (i = 0; i < n; i++)
	{
		delete[] a[i];
	}
	delete[] a;
	for (j = 0; j < m; j++)
	{
		delete[] b[j];
	}
	return EXIT_SUCCESS;
}