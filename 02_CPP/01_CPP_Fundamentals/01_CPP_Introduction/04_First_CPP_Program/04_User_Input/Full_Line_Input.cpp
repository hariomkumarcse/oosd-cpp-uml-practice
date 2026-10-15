#include <iostream>
#include <string>
using namespace std;

int main()
{
	string fullName;
	string address;

	cout << "Enter your full name: ";
	getline(cin, fullName);

	cout << "Enter your address: ";
	getline(cin, address);

	cout << "---- Your Details ----"<<endl;
	cout << "Full Name: " << fullName << endl;
	cout << "Address: " << address << endl;

	return 0;
}