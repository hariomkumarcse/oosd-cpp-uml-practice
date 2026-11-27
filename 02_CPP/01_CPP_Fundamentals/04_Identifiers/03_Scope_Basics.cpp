#include <iostream>
using namespace std;

int globalNumber = 100;

void display()
{
	int localNumber = 50;

	cout<<"Inside display(): "<<endl;
	cout<<"Global Number: "<<globalNumber<<endl;
	cout<<"Local Number: "<<localNumber<<endl;
}

int main()
{
	cout<<"Inside main(): "<<endl;

	cout<<"Global Number: "<<globalNumber<<endl;

	int mainNumber = 200;

	cout<<"Main Number: "<<mainNumber<<endl;

	{
		int blockNumber = 300;
		cout<<"Block Number: "<<blockNumber<<endl;
		cout<<"Main Number inside block: "<<mainNumber<<endl;
	}

	display();
	return 0;
}