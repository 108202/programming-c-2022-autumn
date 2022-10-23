#include <iostream>

int main(int argc, char* argv)
{
	int n = 0;
	int i = 0;
	int a = 1;
	int b = 1;

	std::cin >> n;
	for (i = 1; i <= n; i++)
	{
		std::cout << a << " ";
		b += 1;
		if (b > a)
		{
			a += 1;
			b = 1;
		}
	}
	return EXIT_SUCCESS;
}