#include <iostream>

int del_branch(int n, int** a, int k)
{
	int i = 0;
	int count = 0;
	for (i = 0; i < n; i++)
	{
		if (a[i][0] == k)
		{
			count += 1;
		}
		else if (a[i][1] == k)
		{
			count += del_branch(n, a, a[i][0]);
		}
	}
	return count;
}

int main(int argc, char* argv[])
{
	int n = 0;
	int k = 0;
	int m = 2;
	int i = 0;

	std::cin >> n;

	int** a = new int* [n];

	for (i = 0; i < n; i++)
	{
		a[i] = new int[m];
	}

	for (i = 0; i < n; i++)
	{
		std::cin >> a[i][0] >> a[i][1];
	}

	std::cin >> k;
	
	std::cout << del_branch(n, a, k);

	for (i = 0; i < n; i++)
	{
		delete[] a[i];
	}
	delete[] a;
	return EXIT_SUCCESS;
}