#include <iostream>
using namespace std;

int main()
{
	int firstNumber = 20;
	int secondNumber = 5;

	cout<<"First Number: "<<firstNumber<<endl;
	cout<<"Second Number: "<<secondNumber<<endl;

	int sum = firstNumber+secondNumber;
	int difference = firstNumber-secondNumber;
	int product = firstNumber*secondNumber;
	int quotient = firstNumber/secondNumber;

	cout<<"Sum: "<<sum<<endl;
	cout<<"Difference: "<<difference<<endl;
	cout<<"Product: "<<product<<endl;
	cout<<"Quotient: "<<quotient<<endl;

	return 0;
}