#include <iostream>

int N(int x, int y)
{
	if (x == y)
	{
		return 1;
	}
	else if (x > y)
	{
		return 0;
	}
	else
	{
		return N(x + 3, y) + N(x + 5, y);
	}
}

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;
	
	if (N(1, n) != 0)
	{
		std::cout << "YES";
	}
	else
	{
		std::cout << "NO";
	}
	return EXIT_SUCCESS;
}