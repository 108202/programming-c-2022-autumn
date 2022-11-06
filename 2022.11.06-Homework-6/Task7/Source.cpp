#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int i = 0;
	int a[1000]{ 0 };
	int s = 0;
	int p = 1;
	int maxa = 0;
	int mina = 10*1000000;
	int c = 0;
	int d = 0;

	std::cin >> n;

	for (i = 0; i < n; i++)
	{
		std::cin >> a[i];
		if (a[i] < mina)
		{
			mina = a[i];
			c = i;
		}
		else if (a[i] > maxa)
		{
			maxa = a[i];
			d = i;
		}
	}
	for (i = 0; i < n; i++)
	{
		if (a[i] > 0)
		{
			s += a[i];
		}
	}
	if (c > d)
	{
		for (i = d + 1; i < c; i++)
		{
			p *= a[i];
		}
	}
	if (c < d)
	{
		for (i = c + 1; i < d; i++)
		{
			p *= a[i];
		}
	}
	std::cout << s << " " << p;
	return EXIT_SUCCESS;
}