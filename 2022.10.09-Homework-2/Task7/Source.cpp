#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int m = 0;
	int k = 0;

	std::cin >> n;
	std::cin >> m;
	std::cin >> k;
	
	if (k != m * n and ( k % n == 0 or k % m == 0 ))
	{
		std::cout << "YES";
	}
	else
	{
		std::cout << "NO";
	}
	return EXIT_SUCCESS;
}