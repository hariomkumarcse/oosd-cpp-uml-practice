#include <iostream>
using namespace std;

int main()
{
	int number = 75;

	int* pointer = &number;

	cout<<"Original Value: "<<number<<endl;
	cout<<"Address: "<<pointer<<endl;
	cout<<"Value Using Pointer: "<<*pointer<<endl;

	*pointer = 150;

	cout<<"\nUpdated Value: "<<number<<endl;

	int* emptyPointer = nullptr;

	if(emptyPointer == nullptr)
	{
		cout<<"Pointer is currently null.\n";
	}

	return 0;
}