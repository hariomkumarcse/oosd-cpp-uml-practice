#include <iostream>
using namespace std;

int main()
{
	int a = 7;
	int b = 2;

	double result1 = a/b;
	double result2 = static_cast<double>(a) / b;

	cout<<result1<<endl;
	cout<<result2<<endl;

	return 0;
}