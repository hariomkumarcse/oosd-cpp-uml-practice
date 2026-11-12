#include <iostream>
using namespace std;

int main()
{
	int number = 10;

	int* pointer = &number;
	int& reference = number;

	cout<<number<<endl;

	*pointer = 20;

	cout<<reference<<endl;

	reference += 5;

	cout<<*pointer<<endl;

	cout<<number++<<endl;

	cout<<++number<<endl;

	cout<<number<<endl;

	return 0;
}