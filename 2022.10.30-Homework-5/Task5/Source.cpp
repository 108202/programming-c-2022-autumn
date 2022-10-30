#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int x = 0;
	int i = 0;
	int	difference_near_to_x = 10*10000;
	int a[1000]{ 0 };
	int amax = 0;

	std::cin >> n;

	for (i = 0; i < n; i++)
	{
		std::cin >> a[i];
	}

	std::cin >> x;

	for (i = 0; i < n; i++)
	{
		if (abs(x - abs(a[i])) < difference_near_to_x)
		{
			difference_near_to_x = abs(x - a[i]);
			amax = a[i];
		}
	}
	std::cout << amax;
	return EXIT_SUCCESS;
}