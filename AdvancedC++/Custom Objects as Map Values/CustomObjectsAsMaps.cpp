#include <iostream>
#include <map>
#include <string>

class Person
{
	private:
		std::string name;
		int age;
	
	public:
		Person()
		{
			std::cout << "Empty Construtor Called" << std::endl;
		};
		
		Person(const Person &other)
		{
			std::cout << "Copy Constructor Running" << std::endl;
			name = other.name;
			age = other.age;
		}

		Person(std::string name, int age) :
			name(name), age(age)
		{
			std::cout << "Expected Constructor Called" << std::endl;
		}

		void print() const
		{
			std::cout << name << ": " << age << std::endl;
		}
};

int main()
{
	std::map<int, Person> people;
	people[0] = Person("Mike", 40);
	people[1] = Person("Vicky", 30);
	people[2] = Person("Raj", 20);

	people.insert(std::make_pair(3, Person("Bob", 45)));

	for (std::map<int, Person>::iterator it = people.begin(); it != people.end(); it++)
	{
		it->second.print();
	}

	std::cout << "\nPress any key...";
	std::cin.get();
	return 0;
}