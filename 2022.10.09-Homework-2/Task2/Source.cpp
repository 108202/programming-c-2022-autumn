#include <iostream>

int main(int argc, char* argv[])
{
	int year = 0;

	std::cin >> year;

	if (( year % 4 == 0 and year % 100 != 0 ) or ( year % 400 == 0 ))
	{	
		std::cout << "YES";

	}
	else 
	{	
		std::cout << "NO";

	}
	return EXIT_SUCCESS;
}