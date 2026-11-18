#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	string name = "Hariom";
	double number = 25.0;

	cout<<"Name: "<<name<<endl;

	cout<<"Square root: "<<sqrt(number)<<endl;

	cout<<"Power: "<<pow(2,3)<<endl;

	cout<<fixed<<setprecision(2);
	cout<<"Formatted number: "<< 15.6789 <<endl;

	return 0;
}