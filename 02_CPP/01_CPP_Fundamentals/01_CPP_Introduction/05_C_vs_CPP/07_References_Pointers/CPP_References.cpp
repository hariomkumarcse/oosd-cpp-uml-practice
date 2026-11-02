#include <iostream>
using namespace std;

int main()
{
	int number = 100;

	int& reference = number;

	cout<<"Original Value: "<<number<<endl;
	cout<<"Reference Value: "<<reference<<endl;

	reference = 250;

	cout<<"\nAfter Modification:\n";
	cout<<"Original Variable: "<<number<<endl;
	cout<<"Reference Variable: "<<reference<<endl;

	return 0;
}