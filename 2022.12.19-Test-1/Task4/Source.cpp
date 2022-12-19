#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int a[1000]{ 0 };
	int i = 0;
	int j = 0;
	int res = 0;

	std::cin >> n;

	for (i = 0; i < n; i++)
	{
		std::cin >> a[i];
	}

	int tmpr = a[n - 1];
	int tmpa = n - 1;

	for (i = n - 1; i >= 0; i--)
	{
		if (tmpr < a[i])
		{
			res += (tmpa - i) * a[tmpa];
			tmpa = i;
			tmpr = a[i];
		}
	}
	
	res += tmpr + tmpr * tmpa;

	std::cout << res;
	return EXIT_SUCCESS;
}