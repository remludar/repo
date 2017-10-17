#include <iostream>
#include <vector>

int main()
{
	std::vector<double> numbers(0);
	std::cout << "Size: " << numbers.size() << std::endl;

	int capacity = numbers.capacity();
	std::cout << "Capacity: " << capacity << std::endl << std::endl;

	for (int i = 0; i < 10000; i++)
	{
		if (numbers.capacity() != capacity)
		{
			capacity = numbers.capacity();
			std::cout << "Capacity: " << capacity << std::endl;
		}
		numbers.push_back(i);
	}

	numbers.reserve(100000);
	std::cout << std::endl;
	std::cout << numbers[2] << std::endl;
	std::cout << "Size: " << numbers.size() << std::endl;
	std::cout << "Capacity: " << numbers.capacity() << std::endl;

	std::cout << "\nPress any key..";
	std::cin.get();
	return 0;
}