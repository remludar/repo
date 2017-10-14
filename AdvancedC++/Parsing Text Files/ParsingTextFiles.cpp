#include <iostream>
#include <fstream>
#include <string>

bool _OpenFile(std::ifstream& input, const std::string& fileName );

int main()
{
	std::string filename = "stats.txt";
	std::ifstream input;


	if (!_OpenFile(input, filename))
	{
		return 1;
	}

	while (input)
	{
		std::string line;
		getline(input, line, ':');

		int population;
		input >> population;

		if(!input) break;
		std::cout << line << " -- " << population;
	}
	input.close();



	std::cout<<"\nPress any key..."<<std::endl;
	std::cin.get();
	return 0;
}

bool _OpenFile(std::ifstream& input, const std::string& fileName )
{
	input.open(fileName);
	return input.is_open();
}
