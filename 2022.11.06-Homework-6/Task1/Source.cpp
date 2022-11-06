#include <iostream>

int main(int argc, char* argv[])
{
	int number = 0;
	int i = 0;
	int n[1000]{ 0 };

	std::cin >> number;

	for (i = 0; i < number; i++)
	{
		std::cin >> n[i];
	}

	for (i = number - 1; i >= 0; i--)c
	{
		std::cout << n[i] << " ";
	}
	return EXIT_SUCCESS;
}