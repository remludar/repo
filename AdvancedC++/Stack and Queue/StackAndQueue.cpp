#include <iostream>
#include <stack>
#include <queue>
#include <string>

class Test
{
private:
	std::string _name;

public:
	Test(std::string name):
		_name(name)
	{}
	
	~Test()
	{
		std::cout << _name << " destroyed." << std::endl;
	}

	void print()
	{
		std::cout << _name << " printed." 
		<< std::endl;
	}
};

int main()
{
	/// Stack (LIFO)
	std::cout << "======" << std::endl;
	std::cout << "Stack" << std::endl;
	std::cout << "======" << std::endl;
	std::stack<Test> testStack;
	testStack.push(Test("Mike"));
	testStack.push(Test("John"));
	testStack.push(Test("Sue"));
	std::cout << std::endl;

	while (testStack.size() > 0)
	{
		Test &test = testStack.top();
		test.print();
		testStack.pop();
	}
	std::cout << "\n\n======" << std::endl;
	std::cout << "Queue" << std::endl;
	std::cout << "======" << std::endl;;

	/// Queue (FIFO)
	std::queue<Test> testQueue;
	testQueue.push(Test("Mike"));
	testQueue.push(Test("John"));
	testQueue.push(Test("Sue"));
	std::cout <<  std::endl;

	while (testQueue.size() > 0)
	{
		Test &test = testQueue.front();
		test.print();
		testQueue.pop();
	}

	std::cout << "\nPress any key..." << std::endl;
	std::cin.get();
	return 0;
}