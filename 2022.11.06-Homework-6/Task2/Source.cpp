#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int m = 0;
	int i = 0;
	int c = 0;
	int d = 0;
	int a[1000]{ 0 };

	std::cin >> n;

	for (i = 0; i < n; i++)
	{
		std::cin >> a[i];
	}

	std::cin >> m;

	while (m != 0)
	{
		m--;
		std::cout << "input: ";
		std::cin >> c >> d;
		std::cout << "output: ";
		for (i = c-1; i < d; i++)
		{
			std::cout << a[i] << " ";
		}
		std::cout << "\n";
	}
	std::cout << "\n";
	return EXIT_SUCCESS;
}