#include <iostream>
#include <fstream>>
#include <string>

int main()
{
	std::ofstream outFile;
	std::string outputFileName = "test.txt";
	outFile.open(outputFileName);
	if (outFile.is_open())
	{
		outFile << "Hello world" << std::endl;
		outFile << 1234 << std::endl;
		outFile.close();
	}
	else
	{
		std::cout << "couldn't create file " << outputFileName << std::endl;
	}

	std::cout<<"\nPress any key...";
	std::cin.get();
	return 0;
}