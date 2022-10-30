#include <iostream>

int main(int argc, char* argv[])
{
	int N = 0;
	int i = 0;
	int j = 0;
	double a = 0;

	std::cin >> N;

	for (i = 1; i <= N; i++)
	{
		double j_fact = 1;
		for (j = 1; j <= i; j++)
		{
			j_fact *= j;
		}
		a += 1 / j_fact;
	}
	a += 1;
	a = a * 100000;
	a /= 100000;

	std::cout << a;
	return EXIT_SUCCESS;
}