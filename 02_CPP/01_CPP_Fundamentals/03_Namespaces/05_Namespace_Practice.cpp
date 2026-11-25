#include <iostream>
#include <string>
using namespace std;

namespace Student
{
	string name = "Amit";
	int rollNumber = 101;

	void display()
	{
		cout<<"Student Name: "<<name<<endl;
		cout<<"Roll Number: "<<rollNumber<<endl;	
	}
}

namespace Teacher
{
	string name = "Mr. Hariom";
	string subject = "Computer Science";

	void display()
	{
		cout<<"Teacher Name: "<<name<<endl;
		cout<<"Subject: "<<subject<<endl;
	}
}

namespace Result
{
	int marks = 85;

	void display()
	{
		cout<<"Marks: "<<marks<<endl;

		if(marks >= 40)
		{
			cout<<"Status: Pass\n";
		}
		else
		{
			cout<<"Status: Fail\n";
		}
	}
}

int main()
{
	Student::display();

	Teacher::display();

	Result::display();

	return 0;
}