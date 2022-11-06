#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int i = 0;
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int na[1000]{ 0 };
	int nb = 0;

	std::cin >> n >> a >> b >> c >> d;

	for (i = 1; i <= n; i++)
	{
		na[i] = i ;
	}
	for (i = a; i <= ( a + b ) / 2; i++)
	{
		nb = na[i];
		na[i] = na[a + b - i];
		na[a + b - i] = nb;
	}
	for (i = c; i <= ( c + d ) / 2; i++)
	{
		nb = na[i];
		na[i] = na[c + d - i];
		na[c + d - i] = nb;
	}
	for (i = 1; i <= n; i++)
	{
		std::cout << na[i] << ' ';
	}
	return EXIT_SUCCESS;
}