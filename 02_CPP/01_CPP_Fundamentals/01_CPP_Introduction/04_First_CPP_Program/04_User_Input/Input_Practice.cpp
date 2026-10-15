#include <iostream>
#include <iomanip>
#include <limits>
#include <string>
using namespace std;

int main()
{
	string name;
	int age;
	double marks;
	char grade;

	cout << "Enter your full name: ";
	getline(cin, name);

	cout << "Enter your age: ";
	if(!(cin >> age))
	{
		cerr << "Invalid age input.\n";
		return 1;
	}

	cout << "Enter your marks: ";
	if(!(cin >> marks))
	{
		cerr << "Invalid marks input.\n";
		return 1;
	}

	cout << "Enter your grade: ";
	if(!(cin >> grade ))
	{
		cerr << "Invalid grade input .\n";
		return 1;
	}

	if(age<0 || marks < 0 || marks > 100)
	{
		cerr << "Age or marks are outside the valid range.\n";
		return 1;
	}

	cout << "---- Student Report ----\n";
	cout << "Name: " << name << endl;
	cout << "Age: "<< age << endl;	
	cout << fixed << setprecision(2);
	cout << "Marks: " << marks << endl;
	cout << "Grade: " << grade << endl;

	return 0;
}