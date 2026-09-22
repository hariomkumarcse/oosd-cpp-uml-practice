#include <iostream>

class Calculator
{
	public:
		int add(int a, int b)
		{
			return a + b;
		}
};

int main()
{
	Calculator calculator;

	std::cout << calculator.add(10,20) << std::endl;
	std::cout << calculator.add(50,25) << std::endl;
	std::cout << calculator.add(100,200) << std::endl;

	return 0;
}