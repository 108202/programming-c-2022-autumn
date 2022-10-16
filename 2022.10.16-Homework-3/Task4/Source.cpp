#include <iostream>

int main(int argc, char* argv)
{
	int n = 0;
	std::cin >> n;
	int i = 0;
	int b = 1;
	do
	{
		if (i % n >= (n - i / n-1))
		{
			std::cout << b << " ";
			b -= 1;
		}
		else
		{
			std::cout << b << " ";
			b += 1;
		}
		i += 1;
		if (!(i % n))
		{
			std::cout << "\n";
			b = i / n + 1;
		}
	}
	while (i < n * n);
	return EXIT_SUCCESS;
}