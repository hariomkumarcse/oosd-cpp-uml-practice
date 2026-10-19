#include <iostream>
using namespace std;

int main()
{
	int a, b;

	cout << "Enter two integers: ";

	if(!(cin >> a >> b))
	{
		cerr << "Error: Please enter valid integers.\n";
		return 1;
	}

	cout << "\n ---- Arithmetic Operations ----\n";
	cout << "Addition: " << a+b << endl;
	cout << "Subtraction: " << a-b << endl;
	cout << "Multiplication: " << a*b << endl;

	if(b != 0)
	{
		cout << "Integer Division: " << a/b << endl;
		cout << "Remainder: " << a%b << endl;
		cout << "Decimal Division: " << static_cast<double>(a) /b << endl;
	}

	else
	{
		cout << "Division and remainder by zero are undefined.\n";
	}

	return 0;
}