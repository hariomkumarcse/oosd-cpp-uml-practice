#include <iostream>
using namespace std;

int main()
{
	int totalSeconds;

	cout<<"Enter total second: ";
	cin >> totalSeconds;

	int hours = totalSeconds/3600;

	int minutes = (totalSeconds % 36000) / 60;

	int seconds = totalSeconds % 60;

	cout<<totalSeconds<<"seconds is equivalent to: ";
	cout<<hours<<" hours, "<< minutes<<" minutes, and "<<seconds <<" seconds."<<endl;

	return 0;

}