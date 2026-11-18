#include <iostream>
using namespace std;

void displayMessage();

int main()
{
	cout<<"Welcome to C++ Programming!"<<endl;

	displayMessage();

	cout<<"Program execution completed."<<endl;

	return 0;
}

void displayMessage()
{
	cout << "This is a user-defined function."<<endl;
}