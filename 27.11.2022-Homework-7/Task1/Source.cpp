#include <iostream>

int main(int argc, char** argv[])
{
	int sumn = 0;
	int summ = 0;
	int i = 0;
	int j = 0;
	int n = 0;
	int m = 0;
	std::cin >> n >> m;
	int **a = new int*[n];
	int* sn = new int[n];
	int* sm = new int[m];

	for (i = 0; i < n; i++)
	{
		a[i] = new int[m];
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
		sumn = 0;
		for (j = 0; j < m; j++)
		{
			sumn += a[i][j];
		}
		sn[i] = sumn;
	}

	for (i = 0; i < n; i++)
	{
		std::cout << sn[i] << " ";
	}

	std::cout << "\n";

	for (j = 0; j < m; j++)
	{
		summ = 0;
		for (i = 0; i < n; i++)
		{
			summ += a[i][j];
		}
		sm[j] = summ;
	}

	for (j = 0; j < m; j++)
	{
		std::cout << sm[j] << " ";
	}

	std::cout << "\n";
	std::cout << "\n";

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			std::cout << a[i][j] << " ";
		}
		std::cout << "\n";
	}

	for (i = 0; i < n; i++)
	{
		delete[] a[i];
	}
	delete[] sm;
	delete[] sn;
	delete[] a;
	return EXIT_SUCCESS;
}