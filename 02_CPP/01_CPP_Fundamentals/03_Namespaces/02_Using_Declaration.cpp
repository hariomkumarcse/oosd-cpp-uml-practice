#include <iostream>
using namespace std;

namespace College
{
	int studentCount = 500;

	void displayCollege()
	{
		cout<<"Welcome to College!"<<endl;
	}
}

int main()
{
	using College::studentCount;
	using College::displayCollege;

	cout<<"Total students: "<<studentCount<<endl;

	displayCollege();

	return 0;
}