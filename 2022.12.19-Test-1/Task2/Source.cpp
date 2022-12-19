#include <iostream>

int main(int argc, char* argv[])
{
	int a1 = 0;
	int a2 = 0;
	int a3 = 0;
	int b1 = 0;
	int b2 = 0;
	int b3 = 0;
	int k = 0;
	int w = 0;

	std::cin >> k >> w;
	std::cin >> a1 >> b1 >> a2 >> b2 >> a3 >> b3;

	if (((a1 + a2 + a3 <= w) and (b1 + b2 + b3 >= k)) or (a1 <= w and b1 >= k) or (a2 <= w and b2 >= k) or (a3 <= w and b3 >= k) or (a1 + a2 <= w and b1 + b2 >= k) or (a2 + a3 <= w and b2 + b3 >= k) or (a1 + a3 <= w and b1 + b3 >= k))
	{
		std::cout << "YES";
	}

	else
	{
		std::cout << "NO";
	}
	return EXIT_SUCCESS;
}