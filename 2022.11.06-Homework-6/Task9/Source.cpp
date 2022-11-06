#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int a[1000]{ 0 };
	int i = 0;
	int j = 0;
	int smax = 0;
	int jmax = 0;
	int n0 = 0;
	int k = 1;

	std::cin >> n;

	for (i = 0; i < n; i++)
	{
		std::cin >> a[i];
	}

	for (i = 0; i < n; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (jmax < a[j] * k)
			{
				jmax = a[j] * k;
			}
			k += 1;
		}
		std::cout << jmax << " ";
		k = 1; 
		if (smax < jmax + a[i] * (i + 1 ))
		{
			smax = jmax + a[i] * (i + 1 );
		}
		jmax = 0;
	}
	std::cout << smax;
	return EXIT_SUCCESS;
}