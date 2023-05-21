#include <iostream>

enum Animal_species
{
	empty = 0, worm = 1, bird = 2, fox = 3, wolf = 4, bear = 5, human = 6
};

class Animal
{
private:
	Animal_species kind;
	float power;

public:
	std::string bname;
	Animal() :
		bname(" "), kind(empty), power(0) {};
	Animal(std::string bname, Animal_species kind, float power) :
		bname(bname), kind(kind), power(power) {};
	Animal(const Animal& beast) :
		bname(beast.bname), kind(beast.kind), power(beast.power) {};

	~Animal() {};

	float gpower()
	{
		return power;
	}

	Animal_species gkind()
	{
		return Animal_species(kind);
	}

	std::string beastname()
	{
		return bname;
	}

	void setkind()
	{
		this->kind = kind;
	}

	void setpower()
	{
		if (power > 0)
		{
			this->power = power;
		}
	}

	void powerup()
	{
		power += 1;
	}

	void print()
	{
		std::cout << gkind() << " " << gpower() << "\n";
	}
};

Animal fight(Animal& a, Animal& b)
{
	Animal best = Animal();

	if (a.beastname() == b.beastname())
	{
		if (a.gpower() > b.gpower())
		{
			a.powerup();
			b.~Animal();
			best = a;
		}
		else
		{
			b.powerup();
			a.~Animal();
			best = b;
		}
	}
	else
	{
		if (a.beastname() > b.beastname())
		{
			a.powerup();
			b.~Animal();
			best = a;
		}
		else
		{
			b.powerup();
			a.~Animal();
			best = b;
		}
	}

	return best;
}

int main(int argc, char* argv[])
{
	int i = 0;
	Animal* a = new Animal[100];
	for (i = 0; i < 100; i++)
	{
		a[i] = Animal("name", Animal_species(rand() % 6), (rand() % 100));

	}

	for (i = 0; i < 100; i++)
	{
		a[i].print();
	}

	Animal best = a[0];

	for (i = 0; i < 100; i++)
	{
		best = fight(best, a[i]);
	}

	std::cout << "\n";

	best.print();

	delete[] a;

	return EXIT_SUCCESS;
}