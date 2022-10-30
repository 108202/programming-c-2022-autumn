#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int i = 0;
	int amin = 10*1000000;
	int amax = 0;
	int a[1000]{ 0 };

	std::cin >> n;

	for (i = 0; i < n; i++)
	{
		std::cin >> a[i];
	}

	for (i = 0; i < n; i++)
	{
		if (a[i] < amin)
		{
			amin = a[i];
		}
		if (a[i] > amax)
		{
			amax = a[i];
		}
	}

	for (i = 0; i < n; i++)
	{
		if (a[i] == amax)
		{
			a[i] = amin;
		}
		std::cout << a[i] << " ";
	}
	return EXIT_SUCCESS;
}