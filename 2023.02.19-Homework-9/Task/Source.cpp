#include <iostream>
#include <string>

struct Animal
{
	std::string type;
	std::string name;
	int age;

	Animal()
	{
		this->type = "bird";
		this->name = "Bluebird";
		this->age = 1;
	}

	Animal(std::string type, std::string name, int age)
	{
		this->type = type;
		this->name = name;
		this->age = age;
	}

	Animal(const Animal& Beast)
	{
		this->type = Beast.type;
		this->name = Beast.name;
		this->age = Beast.age;
	}

	~Animal()
	{

	}
};

void printAnimal(struct Animal Beast)
{
	std::cout << Beast.type << " " << Beast.name << " " << Beast.age << std::endl;
}

void elderAnimal(struct Animal Beast)
{
	Beast.age += 1;
}

int main(int argc, char* argv[])
{
	Animal Bird;
	printAnimal(Bird);
	Animal Dog("Dog", "Sharik", 5);
	elderAnimal(Dog);
	printAnimal(Dog);
	return EXIT_SUCCESS;
}