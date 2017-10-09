#include <iostream>
#include <string>



void mightGoWrong()
{
	bool error1 = false;
	bool error2 = true;

	if (error1)
	{
		throw "Something went wrong";
	}

	if (error2)
	{
		throw std::string("Something else went wrong");
	}
}

void useMightGoWrong()
{
	mightGoWrong();
}

int main()
{
	try
	{
		useMightGoWrong();
	}
	catch (int e)
	{
		std::cout<<"Error Code: "<< e << std::endl;
	}
	catch (char const* e)
	{
		std::cout<<"String error message: "<< e <<std::endl;
	}

	catch (std::string &e)
	{
		std::cout << "Error message: " << e << std::endl;
	}
	std::cout<<"Still running"<<std::endl;
	
	std::cout<<"\nPress any key...";
	std::cin.get();
	return 0;
}



