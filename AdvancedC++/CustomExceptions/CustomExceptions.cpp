#include <iostream>

class MyException : public std::exception
{
public:
	virtual const char* what() const throw()
	{
		return "Something bad happened!";
	}
};

class Test
{
	public:
		void GoesWrong()
		{
			throw MyException();
		}
};

int main()
{
	Test test;
	try
	{
		test.GoesWrong();
	}
	catch (MyException &e)
	{
		std::cout << e.what();
	}

	std::cout<<"\nPress any key...";
	std::cin.get();
	return 0;
}