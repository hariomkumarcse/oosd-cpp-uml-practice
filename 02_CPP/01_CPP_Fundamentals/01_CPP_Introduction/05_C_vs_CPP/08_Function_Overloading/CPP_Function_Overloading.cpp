#include <iostream>
using namespace std;

int add(int a, int b)
{
	return a+b;
}

int add(int a, int b, int c)
{
	return a+b+c;
}

double add(double a, double b)
{
	return a+b;
}

string add(string a, string b)
{
	return a + " " + b;
}

int main()
{
	cout<<"Two Integers: "<<add(10,20)<<endl;
	cout<<"Three Integers: "<<add(10,20,30)<<endl;
	cout<<"Two Doubles: "<<add(5.5, 2.5)<<endl;
	cout<<"Two Strings: "<<add("Hello", "C++")<<endl;

	return 0;
}