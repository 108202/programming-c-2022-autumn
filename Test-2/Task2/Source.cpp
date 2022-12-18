#include <iostream>

void hanoi(int n, int a, int b)
{
	int tmp = 0;
	if (n > 0)
	{
		tmp = 6 - a - b;
		if ((b - a) % 3 == 1)
		{
			hanoi(n - 1, a, tmp);
			std::cout << n << " " << a << " " << b << "\n";
			hanoi(n - 1, tmp, b);
		}
		else
		{
			hanoi(n - 1, a, b);
			std::cout << n << " " << a << " " << tmp << "\n";
			hanoi(n - 1, b, a);
			std::cout << n << " " << tmp << " " << b << "\n";
			hanoi(n - 1, a, b);
		}
	}

}

int main(int argc, char* argv[])
{
	int n = 0;

	std::cin >> n;

	hanoi(n, 1, 3);
	return EXIT_SUCCESS;
}