#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int m = 0;
	int a[10000]{ 0 };
	int b[10000]{ 0 };
	int i = 0;
	int* s = 0;
	int* bg = 0;
	int ss = 0;
	int bgg = 0;
	int j = 0;
	bool c = 0;
	int k = 0;
	int max = -10;
	int maxi = 0;

	std::cin >> n >> m;
	for (i = 0; i < n; i++)
	{
		std::cin >> a[i];
	}
	for (i = 0; i < m; i++)
	{
		std::cin >> b[i];
	}

	if (n < m)
	{
		ss = n;
		s = a;
		bgg = m;
		bg = b;
	}
	else
	{
		ss = m;
		s = b;
		bgg = n;
		bg = a;
	}

	for (i = 0; i < ss; i++)
	{
		if (a[i] != -1)
		{
			for (j = i + 1; j < ss; j++)
			{
				if (a[i] == a[j])
				{
					a[j] = -1;
				}
			}
		}
	}

	for (i = 0; i < ss; i++)
	{
		if (a[i] != -1)
		{
			c = 0;
			for (j = 0; j < bgg; j++)
			{
				if (a[i] == b[j])
				{
					c = 1;
					break;
				}
			}
			if (!c)
			{
				a[i] = -1;
			}
		}
	}

	while (true)
	{
		max = -10;
		maxi = 0;
		for (i = 0; i < ss; i++)
		{
			if (a[i] > max)
			{
				max = a[i];
				maxi = i;
			}
		}
		a[maxi] = -1;
		if (max == -1)
		{
			break;
		}
		else
		{
			b[k] = max;
			k++;
		}
	}
	std::cout << "\n";
	for (i = k - 1; i >= 0; i--)
	{
		std::cout << b[i] << " ";
	}

	return EXIT_SUCCESS;
}