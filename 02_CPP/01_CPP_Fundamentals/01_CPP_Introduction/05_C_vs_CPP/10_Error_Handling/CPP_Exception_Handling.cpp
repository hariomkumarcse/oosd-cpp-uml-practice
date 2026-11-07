#include <iostream>
#include <stdexcept>
using namespace std;

double divideNumbers(double a, double b)
{
	if(b == 0)
	{
		throw invalid_argument("Division by zero is not allowed.");
	}

	return a/b;
}

int main()
{
	double firstNumber = 20;
	double secondNumber = 10;

	try
	{
		double result = divideNumbers(firstNumber, secondNumber);

		cout << "Result: " << result << endl;
	}

	catch(const invalid_argument& error)
	{
		cout<<"Error: "<<error.what()<<endl;
	}

	catch(const exception& error)
	{
		cout<<"Unexcepted Error: "<<error.what()<<endl;
	}

	cout<<"Program continues normally.\n";

	return 0;
}