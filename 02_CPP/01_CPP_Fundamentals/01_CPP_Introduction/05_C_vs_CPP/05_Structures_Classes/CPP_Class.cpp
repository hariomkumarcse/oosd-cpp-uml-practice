#include <iostream>
#include <string>
using namespace std;

class Student
{
	private:
		string name;
		int rollNumber;
		double marks;

	public:
		Student(string studentName, int roll, double studentMarks)
		{
			name = studentName;
			rollNumber = roll;
			marks = studentMarks;
		}

		void display() const
		{
			cout << "Student Information\n";
			cout << "Name: " << name << endl;
			cout << "Roll Number: " << rollNumber << endl;
			cout << "Marks: " << marks << endl;
		}

		bool hasPassed() const
		{
			return marks >= 40;
		}
};

int main()
{
	Student student("Hariom", 101, 88.5);

	student.display();

	cout << "Result: "
		<< (student.hasPassed() ? "Pass" : "Fail")
		<< endl;

	return 0;
}