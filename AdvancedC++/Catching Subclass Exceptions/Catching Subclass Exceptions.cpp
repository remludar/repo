#include <iostream>

void GoesWrong()
{
	bool error1Detected = false;
	bool error2Detected = true;

	if (error1Detected)
	{
		throw std::bad_alloc();
	}

	if (error2Detected)
	{
		throw std::exception();
	}
}

int main()
{
	try
	{
		GoesWrong();
	}
	catch (std::bad_alloc &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	
	std::cout << "\nPress any key...";
	std::cin.get();
	return 0;
}