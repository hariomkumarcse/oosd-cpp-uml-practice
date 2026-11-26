#include <iostream>
using namespace std;

int main()
{
	int age = 21;

	double percentage = 85.5;

	const int MAX_MARKS = 100;

	if(percentage >= 40)
	{
		cout<<"Result: Pass"<<endl;
	}

	else
	{
		cout<<"Result: Fail"<<endl;
	}

	for(int i = 1; i <= 3; i++)
	{
		cout<<"Iteration: "<<i<<endl;
	}

	cout<<"\nAge: "<<age<<endl;
	cout<<"Percentage: "<<percentage<<endl;
	cout<<"Maximum Marks: "<<MAX_MARKS<<endl;

	return 0;
}