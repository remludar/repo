#include <iostream>

class CanGoWrong
{
	public: 
		CanGoWrong()
		{
			char *pMemory = new char[99999999];
			delete [] pMemory;
		}
};

int main()
{
	try
	{
		CanGoWrong wrong;
	}
	catch (std::bad_alloc &e)
	{
		std::cout << "Cought exception: " << e.what() << std::endl;
	}

	std::cout<<"\nPress any key...";
	std::cin.get();
	return 0;
}