#include <iostream>
using namespace std;

int calculateSquare(int number)
{
	return number * number;
}

int add(int a, int b)
{
	return a+b;
}

double add(double a, double b)
{
	return a+b;
}

void greet(string name = "Student")
{
	cout << "Hello, " <<name << "!\n";
}

int main()
{
	cout<<"Square: "<<calculateSquare(7)<<endl;
	cout<<"Integer addition: "<<add(10,20)<<endl;
	cout<<"Decimal addition: "<<add(2.5,3.7)<<endl;

	greet();
	greet("Hariom");

	return 0;
}