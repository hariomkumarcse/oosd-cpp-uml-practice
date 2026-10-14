#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float temperature = 36.6f;
	double accountBalance = 12500.75;
	double percentage = 87.32452345;

	cout<<"Temperature: "<<temperature<<'\n';
	cout<<"Account Balance: "<<accountBalance<<'\n';

	cout<<fixed<<setprecision(2);
	cout<<"Percentage: "<<percentage<<'\n';

	return 0;
}