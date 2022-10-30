#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int l = 0;
	int r = 0;
	int i = 0;
	int amax = 0;
	int imin = 0;
	int a[1000]{ 0 };

	std::cin >> n;

	for (i = 0; i < n; i++)
	{
		std::cin >> a[i];
	}

	std::cin >> l >> r;

	for (i = 0; i < n; i++)
	{
		if (l <= a[i] <= r and a[i] > amax)
		{
			amax = a[i];
			imin = i;
		}
	}
	std::cout << amax << " " << imin;
	return EXIT_SUCCESS;
}