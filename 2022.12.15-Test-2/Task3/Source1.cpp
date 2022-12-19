#include <iostream>

int f(int save[], int a, int b, int c)
{
	if (a <= 0 or b <= 0 or c <= 0)
	{
		return 1;
	}
	else if (a > 20 or b > 20 or c > 20)
	{
		return f(save, 20, 20, 20);
	}
	else if (a < b and b < c)
	{
		if (save[a * 10000 + b * 100 + c] != 0)
		{
			return save[a * 10000 + b * 100 + c];
		}
		else
		{
			save[a * 10000 + b * 100 + c] = f(save, a, b, c - 1) + f(save, a, b - 1, c - 1) - f(save, a, b - 1, c);
			return save[a * 10000 + b * 100 + c];
		}
	}
	else
	{
		if (save[a * 10000 + b * 100 + c] != 0)
		{
			return save[a * 10000 + b * 100 + c];
		}
		else
		{
			save[a * 10000 + b * 100 + c] = f(save, a - 1, b, c) + f(save, a - 1, b - 1, c) + f(save, a - 1, b, c - 1) - f(save, a - 1, b - 1, c - 1);
			return save[a * 10000 + b * 100 + c];
		}
	}
}


int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;
	int i = 0;
	int* s = new int[10000000];

	for (i = 0; i < 10000000; i++)
	{
		s[i] = 0;
	}
	
	std::cin >> a >> b >> c;

	std::cout << f(s, a, b, c);

	delete [] s;
	return EXIT_SUCCESS;
}