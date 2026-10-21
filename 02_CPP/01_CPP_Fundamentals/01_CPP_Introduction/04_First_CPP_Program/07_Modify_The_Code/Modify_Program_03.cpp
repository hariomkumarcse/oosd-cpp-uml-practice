#include <iostream>
using namespace std;

int main()
{
	double celsius = 25;
	double Fahrenheit;

	double conversation = (celsius * 9/5) + 32;
	
	cout<<"Celsius: "<<celsius<<" C"<<endl;
	cout<<"Fahrenheit: "<<conversation<<" F"<<endl;

	return 0;
}