#include <iostream>
#include <fstream>
#include <string>

int main()
{
	std::string fileName = "test.txt";
	std::ifstream inFile;

	inFile.open(fileName);
	if (inFile.is_open())
	{
		std::string line;
		
		while (inFile)
		{
			std::getline(inFile, line);
			std::cout << line << std::endl;
		}

		inFile.close();

	}
	else
	{
		std::cout << "Cannot open file: " << fileName << std::endl;
	}
	
	std::cout<<"Press any key..."<<std::endl;
	std::cin.get();
	return 0;
}