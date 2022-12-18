#include <iostream>

void star(char* l, char* l2, int i)
{
	l2[2 * i] = l[i];
	if (l[i + 1] == 0)
	{
		return;
	}

	l2[2 * i + 1] = '*';

	star(l, l2, i + 1);
}

int main(int argc, char* argv[])
{
	char l[1000]{ 0 };
	char l2[2000]{ 0 };

	std::cin >> l;

	star(l, l2, 0);

	std::cout << l2;
	return EXIT_SUCCESS;
}