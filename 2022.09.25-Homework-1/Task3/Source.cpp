#include <iostream>

int main(int argc, char* argv[])
{
	int number_of_students = 0;
	int number_of_apples = 0;
	std::cin >> number_of_students;
	std::cin >> number_of_apples;
	std::cout << number_of_apples % number_of_students << std::endl;
	return EXIT_SUCCESS;
}