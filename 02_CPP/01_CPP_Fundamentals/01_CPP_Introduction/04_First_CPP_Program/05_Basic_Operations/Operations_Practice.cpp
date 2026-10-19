#include <iostream>
using namespace std;

int main()
{
	double a, b;
	int choice;

	cout<<"Enter two numbers: ";
	if(!(cin >> a >> b))
	{
		cerr << "Error: Invalid numbers.\n";
		return 1;
	}

	cout<<"\n ---- Choose Operation ----\n";
	cout<<"1. Addition\n";
	cout<<"2. Subtraction\n";
	cout<<"3. Multiplication\n";
	cout<<"4. Division\n";
	cout<< "Choice: ";

	if(!(cin >> choice))
	{
		cerr<<"Error: Invalid choice.\n";
		return 1;
	}

	switch(choice)
	{
		case 1:
			cout<< "Result: " << a+b << endl;
			break;
		case 2:
			cout<< "Result: " << a-b << endl;
			break;

		case 3:
			cout<< "Result: " << a-b << endl;
			break;

		case 4:
			if(b == 0)
			{
				cerr << "Error: Division by zero.\n";
				return 1;
			}

			cout << "Result: " << a/b << endl;
			break;

		default:
			cerr << "Error: Choose a number from 1 to 4.\n";
			return 1;
	}
	return 0;
}