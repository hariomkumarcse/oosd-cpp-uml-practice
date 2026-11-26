#include <iostream>
using namespace std;

int main()
{
	int age = 21;
	int studentAge = 22;
	int _count = 10;
	int number1 = 100;
	int total_marks = 450;

	cout<<"Age: "<<age<<endl;
	cout<<"Student Age: "<<studentAge<<endl;
	cout<<"Count: "<<_count<<endl;
	cout<<"Number: "<<number1<<endl;
	cout<<"Total Marks: "<<total_marks<<endl;

	/*
        Invalid identifiers (do not uncomment):

        int 1number = 10;       // Cannot start with a digit
        int student age = 20;   // Spaces are not allowed
        int total-marks = 50;   // Hyphen is not allowed
        int class = 10;         // class is a keyword
        */

	int value = 10;
	int Value = 20;
	int VALUE = 30;

	cout<<"\nCase Sensitivity: "<<endl;
	cout<<value<<endl;
	cout<<Value<<endl;
	cout<<VALUE<<endl;

	return 0;
}