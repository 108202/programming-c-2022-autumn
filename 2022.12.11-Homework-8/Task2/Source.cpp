#include <iostream>

int fib(int n)
{
	if (n == 1 or n == 2)
	{
		return 1;
	}
	else
	{
		return (fib(n - 1) + fib(n - 2));
	}
}

int main(int argc, char* arv[])
{
	int n = 0;
	std::cin >> n;
	std::cout << fib(n);
	return EXIT_SUCCESS;
}