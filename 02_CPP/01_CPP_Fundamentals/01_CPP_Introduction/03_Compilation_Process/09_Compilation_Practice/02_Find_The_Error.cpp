#include <iostream>

int calculate(int a, int b)
{
	return a + b;
}

int main()
{
	std::cout << calculate(10,20)
		<< std::endl;

	return 0;
}