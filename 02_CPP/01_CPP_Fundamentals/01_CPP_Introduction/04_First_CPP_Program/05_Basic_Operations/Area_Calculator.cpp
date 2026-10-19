#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double num1, num2, num3;

	cout<<"Enter three numbers: ";
	if(!(cin >> num1 >> num2 >> num3))
	{
		cerr << "Error: Invalid input.\n";
		return 1;
	}

	double sum = num1 + num2 + num3;
	double average = sum / 3.0;

	cout << fixed << setprecision(2);
	cout << "Total: " << sum << endl;
	cout << "Average: " << average << endl;

	return 0;
}