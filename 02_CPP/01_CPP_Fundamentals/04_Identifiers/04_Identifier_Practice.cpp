#include <iostream>
#include <string>
using namespace std;

int main()
{
	int marks_2 = 90;
	int student_name = 100;
	int total_marks = 250;
	int studentClass = 5;

	string studentName = "Rahul";
	int rollNumber = 101;
	int marks1 = 85;
	int marks2 = 90;
	int marks3 = 80;

	int totalMarks = marks1 + marks2 + marks3;

	double percentage = (totalMarks/300.0) * 100;

	cout<<"Student Report"<<endl;
	cout<<"Name: "<<studentName<<endl;
	cout<<"Roll Number: "<<rollNumber<<endl;
	cout<<"Total Marks: "<<totalMarks<<endl;
	cout<<"Percentage: "<<percentage<<"%"<<endl;

	if(percentage >= 40)
	{
		cout<<"Result: Pass"<<endl;
	}
	else
	{
		cout<<"Result: Fail"<<endl;
	}

	return 0;
}