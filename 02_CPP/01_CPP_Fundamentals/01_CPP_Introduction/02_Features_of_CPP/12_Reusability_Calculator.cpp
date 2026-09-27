#include <iostream>

class Calculator
{
	public:
		int add(int a, int b)
		{
			return a+b;
		}

		int subtract(int a, int b)
		{
			return a-b;
		}

		int multiply(int a, int b)
		{
			return a*b;
		}

		double divide(double a, double b)
		{
			return a/b;
		}
};

int main()
{
	Calculator calculator;

	std::cout << "Add: "<< calculator.add(10,20) << std::endl;
	std::cout << "Subtract: " << calculator.subtract(20,5) << std::endl;
	std::cout << "Multiply: " << calculator.multiply(8,5) << std::endl;
	std::cout << "Divide: " << calculator.divide(19,4) <<std::endl;
}
