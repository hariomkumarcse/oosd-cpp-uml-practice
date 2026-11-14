#include <iostream>
#include <string>
using namespace std;

struct StudentData
{
	string name;
	int rollNumber;
	double marks;
};

void displayStudent(const StudentData& student)
{
	cout<<"Name: "<<student.name<<endl;
	cout<<"Roll Number: "<<student.rollNumber<<endl;
	cout<<"Marks: "<<student.marks<<endl;
}

class CPPStudent
{
	private:
		string name;
		int rollNumber;
		double marks;

	public:
		CPPStudent(string studentName, int roll, double studentMarks)	: name(studentName), rollNumber(roll), marks(studentMarks)
		{

		}

		void display() const
		{
			cout<<"Name: "<<name<<endl;
			cout<<"Roll Number: "<<rollNumber<<endl;
			cout<<"Marks: "<<marks<<endl;
		}

		double getMarks() const
		{
			return marks;
		}
};

int main()
{
	StudentData student1 = {"Hariom", 101, 88.5};

	cout<<"C-Style Approach\n";
	displayStudent(student1);

	cout<<"\nC++ Object-Oriented Approach\n";

	CPPStudent student2("Hariom", 101, 88.5);

	student2.display();

	return 0;
}