#include <iostream>
#include <string>
using namespace std;

int main()
{
	string firstName;
	string city;

	cout << "Enter your first name: ";
	cin >> firstName;

	cout << "Enter your city (one word): ";
	cin >> city;

	cout << "Hello, " << firstName << "!\n";
	cout << "Your city is " << city << ".\n";

	return 0;
}