#include <iostream>
#include <string>
using namespace std;

int main()
{
	int age = 20;
	float height = 5.8f;
	double salary = 25000.50;
	char grade = 'A';
	bool isStudent = true;
	string name = "Hariom";

	cout<<"Name: "<<name<<endl;
	cout<<"Age: "<<age<<endl;
	cout<<"Height: "<<height<<endl;
	cout<<"Salary: "<<salary<<endl;
	cout<<"Grade: "<<grade<<endl;
	cout<<boolalpha;
	cout<<"Is Student: "<<isStudent<<endl;

	cout<<"Size of int: "<<sizeof(int)<<"bytes\n";
	cout<<"Size of double: "<<sizeof(double)<<"bytes\n";

	return 0;
}