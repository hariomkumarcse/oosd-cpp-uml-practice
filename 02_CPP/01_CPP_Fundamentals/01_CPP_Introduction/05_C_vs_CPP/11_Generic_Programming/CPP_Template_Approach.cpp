#include <iostream>
#include <string>
using namespace std;

template <typename T>
T findMaximum(T a, T b)
{
	return (a>b) ? a : b;
}

template <typename T>
void displayValue(const T& value)
{
	cout << "Value: " << value << endl;
}

int main()
{
	int firstNumber = 10;
	int secondNumber = 20;

	double firstDecimal = 5.5;
	double secondDecimal = 8.5;

	string firstName = "Hariom";
	string secondName = "Kumar";

	cout << "Maximum Integer: "
		<< findMaximum(firstNumber, secondNumber) << endl;

	cout << "Maximum Double: "
		<< findMaximum(firstDecimal, secondDecimal) << endl;

	cout << "Maximum String: "
		<< findMaximum(firstName, secondName) << endl;

	displayValue(100);
	displayValue(25.75);
	displayValue("C++ Templates");

	return 0;
}