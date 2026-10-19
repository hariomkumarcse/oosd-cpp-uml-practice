#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	constexpr double PI = 3.142;

	double length, width, side, radius;

	cout << "Enter rectangle length and width: ";
	if(!(cin >> length >> width) || length <= 0 || width <= 0)
	{
		cerr<<"Error: Dimensions must be positive numbers.\n";
		return 1;
	}

	cout << "Enter square side: ";
	if(!(cin >> side) || side <= 0)
	{
		cerr << "Error: Side must be positive.\n";
		return 1;
	}

	cout << "Enter circle radius: ";
	if(!(cin >> radius) || radius <= 0)
	{
		cerr << "Error: Radius must be positive.\n";
		return 1;
	}

	cout << fixed << setprecision(2);
	cout << "\n---- Areas ----\n";
	cout << "Rectangle: " << length * width << endl;
	cout << "Square: " << side * side << endl;
	cout << "Circle: " << PI * radius * radius << endl;

	return 0;
}