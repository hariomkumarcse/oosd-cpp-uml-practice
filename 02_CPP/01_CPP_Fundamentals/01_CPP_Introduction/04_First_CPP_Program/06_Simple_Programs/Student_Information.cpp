#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	string name, branch, college;
	int rollNumber, semester;
	double marks;

	cout<<"Enter full Name: ";
	getline(cin, name);

	cout<<"Enter roll number: ";
	if(!(cin >> rollNumber) || rollNumber <= 0)
	{
		cerr<< "Error: Invalid roll number.\n";
		return 1;
	}

	cout << "Enter semester: ";
	if(!(cin >> semester) || semester < 1 || semester > 12)
	{
		cerr << "Error: Invalid semester.\n";
		return 1;
	}

	cout <<"Enter marks (0-100): ";
	if(!(cin >> marks) || marks < 0 || marks > 100)
	{
		cerr<<"Error: Marks must be between 0 and 100.\n";
		return 1;
	}

	cin.ignore(1000, '\n');

	cout<<"Enter branch: ";
	getline(cin, branch);

	cout <<"Enter college name: ";
	getline(cin, college);

	cout<<"\n---- Student Information ----\n";
	cout<<"Name: " <<name<<endl;
	cout<<"Roll Number: "<<rollNumber<<endl;
	cout<<"Semester: "<<semester<<endl;
	cout<<"Branch: "<<branch<<endl;
	cout<<"College: "<<college<<endl;
	cout<<fixed<<setprecision(2);
	cout<<"Marks:"<<marks<<"%\n";

	cout<<"Result: " << (marks >= 40 ? "Pass" : "Fail") << endl;

	return 0;
}