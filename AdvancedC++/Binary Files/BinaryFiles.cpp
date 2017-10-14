#include <iostream>
#include <fstream>
#include <string>

#pragma pack(push, 1)
struct Person
{
	char name[50];
	int age;
	double height;
};
#pragma pack(pop)

int main()
{
	Person someone = {"Frodo", 220, 0.8};

	////// write binary file ////////////////
	std::string fileName = "test.bin";
	std::ofstream outputFile;
	outputFile.open(fileName, std::ios::binary);

	if (outputFile.is_open())
	{
		outputFile.write(reinterpret_cast<char *>(&someone), sizeof(Person));
		outputFile.close();
	}
	else
	{
		std::cout<<"Couldn't create file: " << fileName << std::endl;
	}

	////// read binary file ////////////////
	Person someoneElse = {};

	std::ifstream inputFile;
	inputFile.open(fileName, std::ios::binary);

	if (inputFile.is_open())
	{
		inputFile.read(reinterpret_cast<char *>(&someoneElse), sizeof(Person));
		inputFile.close();
	}
	else
	{
		std::cout << "Couldn't read file: " << fileName << std::endl;
	}

	std::cout << someoneElse.name << "," << someoneElse.age << "," << someoneElse.height << std::endl;

	std::cout << "\nPress any key..." << std::endl;
	std::cin.get();
	return 0;
}