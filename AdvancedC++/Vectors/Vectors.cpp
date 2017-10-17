#include <iostream>
#include <vector>
#include <string>

int main()
{
	std::vector<std::string> strings;
	strings.push_back("one");
	strings.push_back("two");
	strings.push_back("three");

	for (int i = 0; i < strings.size(); i++)
	{
		std::cout << strings[i] << std::endl;
	}
	std::cout << std::endl;

	std::vector<std::string>::iterator iter;
	for (iter = strings.begin(); iter != strings.end(); iter++)
	{
		std::cout << *iter << std::endl;
	}
	std::cout << std::endl;

	iter = strings.begin();
	iter += 2;
	std::cout << *iter << std::endl;

	std::cout << "\nPress any key...";
	std::cin.get();
	return 0;
}