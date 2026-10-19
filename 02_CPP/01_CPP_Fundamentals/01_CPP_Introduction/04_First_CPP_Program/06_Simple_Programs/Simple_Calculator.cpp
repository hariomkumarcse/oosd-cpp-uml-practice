#include <iostream>
#include <limits>
using namespace std;

int main()
{
	int choice;

	do
	{
		cout << "\n ---- Simple Calculator ----\n";
		cout << "1. Add\n";
		cout << "2. Subtract\n";
		cout << "3. Multiply\n";
		cout << "4. Divide\n";
		cout << "5. Exit\n";
		cout << "Enter choice: ";

		if(!(cin >> choice))
		{
			cerr << "Error: Enter a valid menu number.\n";
			return 1;
		}

		if(choice == 5)
		{
			cout << "Calculator closed.\n";
			break;
		}

		if(choice < 1 || choice > 5)
		{
			cout << "Invalid choice. Try again.\n";
			continue;
		}

		double a, b;

		cout << "Enter two numbers: ";
		if(!(cin >> a >> b))
		{
			cerr << "Error: Invalid numbers.\n";
			return 1;
		}

		switch(choice)
		{
			case 1:
				cout<< "Result: " << a + b << endl;
				break;

			case 2:
				cout<< "Result: " << a - b << endl;
				break;

			case 3:
				cout<< "Result: " << a * b << endl;
				break;

			case 4:
				if(b == 0)
				{
					cout << "Cannot divide by zero.\n";
				}

				else
				{
					cout << "Result: " << a/b << endl;
				}
				break;
		}

	}
	while(true);

	return 0;
}