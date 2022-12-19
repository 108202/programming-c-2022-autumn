#include <iostream>

void helix(int** a, int n, int i, int j, int disti, int distj, int k)
{
	if (k <= n * n)
	{
		if ((i + disti >= 0) and (j + distj >= 0) and (i + disti < n) and (j + distj < n) and (a[i + disti][j + distj] == 0))
		{
			a[i][j] = k;
			helix(a, n, i + disti, j + distj, disti, distj, k + 1);
		}
		else
		{
			a[i][j] = k;
			if (disti == 0 and distj == 1)
			{
				helix(a, n, i + 1, j, 1, 0, k + 1);
			}
			if (disti == 1 and distj == 0)
			{
				helix(a, n, i, j - 1, 0, -1, k + 1);
			}
			if (disti == -1 and distj == 0)
			{
				helix(a, n, i, j + 1, 0, 1, k + 1);
			}
			if (disti == 0 and distj == -1)
			{
				helix(a, n, i - 1, j, -1, 0, k + 1);
			}
		}
	}

	else
	{
		return;
	}
}

int main(int argc, char* argv[])
{
	int n = 0;
	int i = 0;
	int j = 0;

	std::cin >> n;
	
	int** a = new int* [n];
	for (i = 0; i < n; i++)
	{
		a[i] = new int[n] {0};
	}

	helix(a, n, 0, 0, 0, 1, 1);

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			std::cout << a[i][j] << " ";
		}
		std::cout << "\n";
	}

	for (i = 0; i < n; i++)
	{
		delete[] a[i];
	}
	delete[] a;
	return EXIT_SUCCESS;
}