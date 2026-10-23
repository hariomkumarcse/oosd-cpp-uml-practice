#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double subject1, subject2, subject3;

	cout<<"Enter Marks of Subject 1: "<<endl;
	cin>>subject1;

	cout<<"Enter Marks of Subject 2: "<<endl;
	cin>>subject2;

	cout<<"Enter Marks of Subject 3: "<<endl;
	cin>>subject3;

	double totalMarks = subject1+subject2+subject3;
	double averageMarks = (subject1+subject2+subject3)/3;

	cout<<"Total Marks: "<<totalMarks<<endl;
	cout<<"Average Marks: "<<averageMarks<<endl;

	return 0;
}