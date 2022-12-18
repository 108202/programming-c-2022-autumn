#include <iostream>

char max(char* l, int i)
{
	if (l[i + 1] == 0)
	{
		return l[i];
	}
	if (l[i] > l[i + 1])
	{
		l[i + 1] = l[i];
	}

	return max(l, i + 1);
}

int main(int argc, char* argv[])
{
	char l[1000]{ 0 };

	std::cin >> l;

	std::cout << max(l, 0);
	return EXIT_SUCCESS;
}