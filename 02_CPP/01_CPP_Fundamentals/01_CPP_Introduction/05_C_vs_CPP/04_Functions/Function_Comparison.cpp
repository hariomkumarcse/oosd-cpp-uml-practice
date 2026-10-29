#include <iostream>
using namespace std;

int add(int a, int b)
{
	return a+b;
}

double add(double a, double b)
{
	return a+b;
}

int main()
{
	cout <<"C vs C++: Functions\n\n";

	cout<<"- Supports functions\n";
	cout<<"- Does not support function overloading\n";
	cout<<"- Does not support default arguments\n\n";

	cout<<"C++:\n";
	cout<<"- Supports functions\n";
	cout<<"- Supports default arguments\n";
	cout<<"- Supports templates\n\n";

	cout<<"Integer addition: "<<add(5,10)<<endl;
	cout<<"Decimal addition: "<<add(1.5,2.5)<<endl;

	return 0;
}