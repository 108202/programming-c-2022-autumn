#include <iostream>

void reverse(int*& a, int n)
{
	if (n >= 0)
	{
		std::cout << a[n] << " ";
		reverse(a, n - 1);
	}
}

int main(int argc, char* argv[])
{
	int n = 0;
	int i = 0;

	std::cin >> n;

	int *a = new int[n];

	for (i = 0; i < n; i++)
	{
		std::cin >> a[i];
	}

	reverse(a, n - 1);
}