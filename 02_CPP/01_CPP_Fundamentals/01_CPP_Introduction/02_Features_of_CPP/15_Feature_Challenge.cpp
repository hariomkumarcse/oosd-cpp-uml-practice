#include <iostream>
using namespace std;
class Employee
{
	string name;
	double salary;

	public:
		void displayDetails();

		void calculateSalary();

		string getName()
		{
			return name;
		}

		void setName(string nm)
		{
			name = nm;
		}

		double getSalary()
		{
			return salary;
		}

		void setSalary(double sy)
		{
			salary = sy;
		}
};

class Developer : public Employee
{
	public:
		void writeCode()
		{
			cout<<"Developer is writing code"<<endl;
		}

		void displayDetails()
		{
			cout<<"Developer Name: "<<getName()<<endl;
			cout<<"Developer Salary: "<<getSalary()<<endl;
		}
};

class Manager : public Employee
{
	public:
		void conductMeeting()
		{
			cout<<"Manager is conducting Meeting"<<endl;
		}

		void displayDetails()
		{
			cout<<"Manage Name: "<<getName()<<endl;
			cout<<"Manager Salary:"<<getSalary()<<endl;
		}
};

int main()
{
	cout<<"\n---- Developer Details ----"<<endl;

	Developer d1;

	d1.setName("Hariom");
	d1.setSalary(100000);

	d1.writeCode();
	d1.displayDetails();

	cout<<"\n---- Manager Details ----"<<endl;

	Manager m1;

	m1.setName("Ram Kumar");
	m1.setSalary(50000);

	m1.conductMeeting();
	m1.displayDetails();
}