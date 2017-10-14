#include <iostream>

#pragma pack(push, 1)
struct Person
{
	char name[50];
	int age;
	double weight;
};
#pragma pack(pop)

int main()
{

	std::cout << sizeof(Person) << std::endl;

	std::cout << "\nPress any key..." << std::endl;
	std::cin.get();
	return 0;
}