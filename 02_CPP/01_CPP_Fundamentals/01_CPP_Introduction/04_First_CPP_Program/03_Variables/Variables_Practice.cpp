#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	string name = "Hariom";
	int age = 20;
	double cgpa = 8.25;
	char grade = 'A';
	bool isEnrolled = true;

	cout << "---- Student Profile ----\n";
	cout << "Name: " << name << '\n';
	cout << "Age: " << age << '\n';

	cout << fixed << setprecision(2);
	cout << "CGPA: " << cgpa << '\n';

	cout << "Grade: " << grade << '\n';
	cout << boolalpha;
	cout << "Currently Enrolled: " << isEnrolled << '\n';

	return 0;
}