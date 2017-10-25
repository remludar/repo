#include <iostream>
#include <map>
#include <string>

class Person
{
private:
	std::string name;
	int age;

public:
	//Default Constructor
	Person(){};

	//Copy Constructor
	Person(const Person &other)
	{
		name = other.name;
		age = other.age;
	}
	
	//Constructor
	Person(std::string name, int age) :
		name(name), age(age){}

	void print() const
	{
		std::cout << name << ": " << age << std::flush;
	}

	bool operator< (const Person &otherPerson) const
	{
		if(name == otherPerson.name)
			return age < otherPerson.age;

		return name < otherPerson.name;

	}
};

int main()
{
	std::map<Person, int> people;
	people[Person("Mike", 40)] = 0;
	people[Person("Mike", 50)] = 3;
	people[Person("Vicky", 30)] = 1;
	people[Person("Raj", 20)] = 2;


	for (std::map<Person, int>::iterator it = people.begin(); it != people.end(); it++)
	{
		std::cout << it->second << ": " << std::flush;
		it->first.print();
		std::cout << "\n";
	}

	std::cout << "\nPress any key...";
	std::cin.get();
	return 0;
}