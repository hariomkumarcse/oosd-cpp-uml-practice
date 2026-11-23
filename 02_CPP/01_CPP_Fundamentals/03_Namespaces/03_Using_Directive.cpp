#include <iostream>
using namespace std;

namespace University
{
	string universityName = "AKTU";

	void display()
	{
		cout<<"University: "<<universityName<<endl;
	}

	void showMessage()
	{
		cout<<"Welcome to University!"<<endl;
	}
}

int main()
{
	using namespace University;

	display();

	showMessage();

	cout<<"Name: "<<universityName<<endl;

	return 0;
}