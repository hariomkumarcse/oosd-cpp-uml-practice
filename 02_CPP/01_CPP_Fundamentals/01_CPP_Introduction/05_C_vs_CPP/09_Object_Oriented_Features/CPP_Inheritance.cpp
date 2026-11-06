#include <iostream>
#include <string>
using namespace std;

class Person
{
	protected:
		string name;
		int age;

	public:
		Person(string personName, int personAge)
		{
			name = personName;
			age = personAge;
		}

		void displayPerson() const
		{
			cout<<"Name: "<<name<<endl;
			cout<<"Age: "<<age<<endl;
		}
};

class Student : public Person
{
	private:
		int rollNumber;
		string course;

	public:
		Student(string name, int age, int roll, string studentCourse) : Person(name, age)
		{
			rollNumber = roll;
			course = studentCourse;
		}

		void displayStudent() const
		{
			displayPerson();
			cout<<"Roll Number: "<<rollNumber<<endl;
			cout<<"Course: "<<course<<endl;
		}
};

int main()
{
	Student student("Hariom", 20, 101, "B.Tech CSE");

	cout<<"Student Information\n";
	student.displayStudent();

	return 0;
}