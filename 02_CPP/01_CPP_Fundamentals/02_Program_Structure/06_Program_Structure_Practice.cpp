#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

double calculateAverage(int m1, int m2, int m3)
{
	double avg = (m1+m2+m3)/3.0;
	return avg;
}

int main()
{
	string studentName;
	int mark1, mark2, mark3;

	cout<<"Enter student name: ";
	getline(cin, studentName);

	cout<<"Enter marks in three subjects: ";
	cin>>mark1>>mark2>>mark3;

	double average = calculateAverage(mark1, mark2, mark3);

	cout<<fixed<<setprecision(2);

	cout<<"\n---- Student Report ----"<<endl;
	cout<<"Name: "<<studentName<<endl;
	cout<<"Average: "<<average<<endl;

	if(average >= 40)
	{
		cout<<"Result: Pass"<<endl;
	}

	else
	{
		cout<<"Result: Fail"<<endl;
	}

	return 0;
}