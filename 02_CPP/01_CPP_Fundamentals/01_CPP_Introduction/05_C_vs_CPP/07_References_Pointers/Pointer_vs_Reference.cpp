#include <iostream>
using namespace std;

int main()
{
	int number = 10;

	int* pointer = &number;

	int& reference = number;

	cout<<"Original Value: "<<number<<endl;

	*pointer = 20;
	cout<<"After Pointer Modification: "<<number<<endl;

	reference = 30;
	cout<<"After Reference Modification: "<<number<<endl;

	cout << "\nComparison:\n";
	cout << "Pointer stores an address.\n";
    	cout << "Reference acts as an alias.\n";
    	cout << "Pointer can be nullptr.\n";
    	cout << "Reference must be initialized.\n";
    	cout << "Pointer can point to another object.\n";
    	cout << "Reference cannot be reseated.\n";

    	return 0;
}