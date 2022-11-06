#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int i = 0;
	int k = 0;
	int j = 0;
	int a[1000]{ 0 };

	std::cin >> n;

	for (i = 0; i < n; i++)
	{
		std::cin >> a[i];
		if (a[i] < a[j])
		{
			j = i;
		}
	}
	for (i = j; i < n; i++)
		std::cout << a[i] << " ";
	for (i = 0; i < j; i++)
		std::cout << a[i] << " ";
	return EXIT_SUCCESS;
}