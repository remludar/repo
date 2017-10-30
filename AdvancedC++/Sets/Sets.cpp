#include <iostream>
#include <set>
#include<string>

class Dog
{
	public:
		std::string name;
		int age;

		Dog():
			name(""),
			age(0)
		{}

		Dog(std::string name, int age):
			name(name), 
			age(age)
		{}

		void print() const
		{
			std::cout << name << ": " << age << std::flush;
		}

		bool operator< (const Dog &otherDog) const
		{
			if (name == otherDog.name)
				return age < otherDog.age;

			return name < otherDog.name;
		}
};

int main()
{
	///primitive int in a Set
	std::set<int> numbers;

	numbers.insert(10);
	numbers.insert(30);
	numbers.insert(20);
	numbers.insert(10);

	for (std::set<int>::iterator it = numbers.begin(); it != numbers.end(); it++)
	{
		std::cout << *it << std::endl;
	}

	///Custom Class in a Set
	std::set<Dog> dogs;
	dogs.insert(Dog("Ralph", 20));
	dogs.insert(Dog("Archie", 5));
	dogs.insert(Dog("Archie", 3));
	dogs.insert(Dog("Archie", 5));
	dogs.insert(Dog("Scruffy", 7));

	std::cout << std::endl;

	for (std::set<Dog>::iterator it = dogs.begin(); it != dogs.end(); it++)
	{
		it->print();
		std::cout << std::endl;	
	}

	std::cout << "\nPress any key..." << std::endl;
	std::cin.get();
	return 0;
}