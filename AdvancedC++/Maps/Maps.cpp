#include <iostream>
#include <map>
#include <string>

int main()
{
	std::map<std::string, int> ages;
	ages["Mike"] = 40;
	ages["Raj"] = 20;
	ages["Vicky"] = 30;

	ages.insert(std::make_pair("Peter", 100));

	std::cout<< ages["Raj"] << std::endl;

	if (ages.find("Vicky") != ages.end())
	{
		std::cout << "Found Vicky" << std::endl;
	}
	else
	{
		std::cout << "Key not found." << std::endl;
	}

	std::cout<<std::endl;
	for (std::map<std::string, int>::iterator it = ages.begin(); it != ages.end(); it++)
	{
		std::pair<std::string, int> age = *it;
		std::cout << age.first << ": " << age.second << std::endl;
	}
	std::cout << std::endl;
	for (std::map<std::string, int>::iterator it = ages.begin(); it != ages.end(); it++)
	{
		std::cout<< it->first << ": " << it->second << std::endl;
	}

	std::cout << "\nPress any key...";
	std::cin.get();
	return 0;
}