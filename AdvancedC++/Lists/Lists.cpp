#include <iostream>
#include <list>

int main()
{
	std::list<int> numbers;
	numbers.push_back(1);
	numbers.push_back(2);
	numbers.push_back(3);
	numbers.push_front(0);

	std::list<int>::iterator it = numbers.begin();
	it++;
	numbers.insert(it, 100);
	std::cout << "Element: " << *it << std::endl;

	std::list<int>::iterator eraseIt = numbers.begin();
	eraseIt++;
	eraseIt = numbers.erase(eraseIt);
	std::cout << "Element: " << *eraseIt << std::endl << std::endl;

	while (it != numbers.end())
	{
		if (*it == 1)
		{
			it = numbers.erase(it);
			continue;
		}
		if (*it == 2)
		{
			numbers.insert(it, 1234);
		}
		
		it++;
	}

	/*for (std::list<int>::iterator it = numbers.begin(); it != numbers.end();)
	{
		if (*it == 2)
		{
			numbers.insert(it, 1234);
		}

		if (*it == 1)
		{
			it = numbers.erase(it);
		}
		else
		{
			it++;
		}
	}*/

	for (std::list<int>::iterator it = numbers.begin(); it != numbers.end(); it++)
	{
		std::cout << *it << std::endl;
	}

	std::cout << "\nPress any key...";
	std::cin.get();
	return 0;
}