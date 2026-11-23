#include <iostream>
using namespace std;

namespace First
{
	int number = 100;

	void display()
	{
		cout<<"First namespace"<<endl;
	}
}

namespace Second
{
	int number = 200;

	void display()
	{
		cout<<"Second namespace"<<endl;
	}
}

int main()
{
	cout<<"First number: "<<First::number<<endl;
	cout<<"Second number: "<<Second::number<<endl;

	First::display();
	Second::display();

	return 0;
}