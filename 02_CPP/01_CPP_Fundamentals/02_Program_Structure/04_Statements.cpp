#include <iostream>
using namespace std;

int main()
{
	int age = 21;

	age = age + 1;

	cout<<"Age: "<<age<<endl;

	if(age >= 18)
	{
		cout<<"You are eligible to vote."<<endl;
	}

	for(int i=1; i<=5; i++)
	{
		cout<<"Number: "<<i<<endl;
	}

	return 0;
}