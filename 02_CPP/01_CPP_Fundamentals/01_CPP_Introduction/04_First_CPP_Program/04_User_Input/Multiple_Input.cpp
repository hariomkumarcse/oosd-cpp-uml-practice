#include <iostream>
using namespace std;

int main()
{
	int first, second, third;

	cout << "Enter three integers separated by spaces: ";
	cin >> first >> second >> third;

	int sum = first + second + third;
	double average = sum/3.0;

	cout<<"First: " << first << '\n';
	cout<<"Second: " << second << endl;
	cout << "Third: " << third << endl;
	cout << "Sum: " << sum << endl;
	cout << "Average: " << average << endl;

	return 0;
}