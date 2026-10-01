#include <iostream>

int calculateSquare(int number)
{
	return number * number;
}

int main()
{
	int number = 7;

	std::cout << "Square: " 
		<<calculateSquare(number)
		<<std::endl;

	return 0;
}