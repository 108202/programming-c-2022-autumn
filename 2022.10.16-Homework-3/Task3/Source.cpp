#include <iostream>

int main(int argc, char* argv)
{
	int n = 0;
	std::cin >> n;
	int a = 0;
	int c = 0;
	int b = 0;
	b = n;
	do
	{
		a += 1;
		std::cout << a << " ";
		if (a == n)
		{
			std::cout << "\n";
			n += 1;
			c += 1;
			a = c;
		}
	} while (n != 2 * b);
	return EXIT_SUCCESS;
}