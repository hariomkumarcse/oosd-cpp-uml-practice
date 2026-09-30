#include <iostream>

#define PI 3.14159
#define SQUARE(x) ((x) * (x))

int main()
{
	double radius = 5.0;

	double area = PI * SQUARE(radius);

	std::cout << "Area: " << area << std::endl;

	return 0;
}