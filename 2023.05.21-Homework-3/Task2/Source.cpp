#include <iostream>
#include <string>
using std::swap;

struct Student
{
private:
	std::string name;
	std::string surname;
	int math_grade;
	int physics_grade;
	int inf_grade;

public:
	Student(std::string name = "Igor", std::string surname = "Voytenko", int math_grade = 0, int physics_grade = 0, int inf_grade = 0):
		name(name), surname(surname), math_grade(math_grade), physics_grade(physics_grade), inf_grade(inf_grade) {};
	Student(const Student& p) :
		name(p.name), surname(p.surname), math_grade(p.math_grade), physics_grade(p.physics_grade), inf_grade(p.inf_grade) {};
	float mid_grade()
	{
		return (math_grade + physics_grade + inf_grade) / 3;
	}

	void write()
	{
		std::cout << surname << " " << name << "\n";
	}

	~Student()
	{};
};

int main(int argc, char* argv[])
{
	int n = 0;
	int i = 0;
	int j = 0;

	std::cin >> n;
	
	Student* a = new Student[n];

	std::string name;
	std::string surname;
	int math ;
	int physics;
	int inf;

	for (i = 0; i < n; i++)
	{
		std::cin >> name;
		std::cin >> surname;
		std::cin >> math;
		std::cin >> physics;
		std::cin >> inf;

		a[i] = Student(name, surname, math, physics, inf);
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n - 1; j++)
		{
			if (a[j].mid_grade() < a[j + 1].mid_grade())
			{
				swap(a[j], a[j + 1]);
			}
		}
	}

	for (i = 0; i < n; i++)
	{
		a[i].write();
	}

	delete[] a;

	return EXIT_SUCCESS;
}