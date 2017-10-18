#include <iostream>
#include <vector>

int main()
{
	std::vector<std::vector<int>> grid(13, std::vector<int>(13));


	for (int row = 1; row < grid.size(); row++)
	{
		for (int col = 1; col < grid[row].size(); col++)
		{
			grid[row][col] = col * 12;
			std::cout << grid[row][col];
			if (col < grid[row].size() - 1)
			{
				std::cout << ",";
			}
		}
		std::cout << std::endl;
	}

	std::cout << "\nPress Any Key...";
	std::cin.get();
	return 0;
}