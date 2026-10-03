#include <iostream>

#define MULTIPLIER 2

int calculate(int number)
{
	return number * MULTIPLIER;
}

int main()
{
	int number = 25;

	std::cout << "Original number: "
		<< number
		<< std::endl;

	std::cout << "Calculate value: "
		<< calculate(number)
		<< std::endl;

	return 0;
}