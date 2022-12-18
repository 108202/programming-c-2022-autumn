#include <iostream>

int binom(int n, int k)
{
	if (k == 0 or k == n)
	{
		return 1;
	}
	else
	{
		return binom(n - 1, k - 1) + binom(n-1, k);
	}
}

int main(int argc, char* arv[])
{
	int n = 0;
	int k = 0;
	std::cin >> n >> k;
	std::cout << binom(n, k);
	return EXIT_SUCCESS;
}