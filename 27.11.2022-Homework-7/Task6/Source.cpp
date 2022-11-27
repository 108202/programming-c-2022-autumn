#include <iostream>

int main(int argc, char* argv[])
{
	int i = 0;
	int j = 0;
	int n = 0;
	int m = 0;

	std::cin >> n >> m;

	int** a = new int*[n];
	int** b = new int* [n];
	int** sum = new int* [n];
	
	for (i = 0; i < n; i++)
	{
		a[i] = new int[m];
	}
	for (i = 0; i < n; i++)
	{
		b[i] = new int[m];
	}
	for (i = 0; i < n; i++)
	{
		sum[i] = new int[m];
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			std::cin >> a[i][j];
		}
	}

	std::cout << "\n";

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			std::cin >> b[i][j];
		}
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			sum[i][j] = a[i][j] + b[i][j];
		}
	}

	std::cout << "\n";

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			std::cout << sum[i][j] << " ";
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
	for (i = 0; i < n; i++)
	{
		delete[] sum[i];
	}
	delete[] sum;
	return EXIT_SUCCESS;
}