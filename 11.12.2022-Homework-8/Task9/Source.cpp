#include <iostream>

void rep_deleter(char* l, int i)
{
	if (i == strlen(l))
	{
		return;
	}
	if (l[i] == l[strlen(l) - i - 1] and i != strlen(l) - i -1)
	{
		rep_deleter(l, i + 1);
	}
	else
	{
		std::cout << l[i];
		rep_deleter(l, i + 1);
	}
}

int main(int argc, char* argv[])
{
	char l[1000]{ 0 };

	std::cin >> l;

	rep_deleter(l, 0);
	return EXIT_SUCCESS;
}