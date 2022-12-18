#include <iostream>

int center = 0;

void evenstr(char* l, char* l2, int i)
{
	if (l[i] == 0)
	{
		return;
	}

	if (i < center)
	{
		l2[2 * i] = '(';
		l2[2 * i + 1] = l[i];
	}
	else
	{
		l2[2 * i] = ')';
		l2[2 * i + 1] = l[i];
	}

	evenstr(l, l2, i + 1);
}

void oddstr(char* l, char* l2, int i)
{
	if (l[i] == 0)
	{
		l2[2 * i] = ')';
		return;
	}

	if (i <= center)
	{
		l2[2 * i] = '(';
		l2[2 * i + 1] = l[i];
	}
	else
	{
		l2[2 * i] = ')';
		l2[2 * i + 1] = l[i];
	}

	oddstr(l, l2, i + 1);
}

int main(int argc, char* argv[])
{
	char l[1000]{ 0 };
	char l2[2000]{ 0 };

	std::cin >> l;

	center = strlen(l) / 2;

	if (strlen(l) % 2 == 0)
	{
		evenstr(l, l2, 0);
	}

	else
	{
		oddstr(l, l2, 0);
	}
	
	std::cout << l2;
	return EXIT_SUCCESS;
}
