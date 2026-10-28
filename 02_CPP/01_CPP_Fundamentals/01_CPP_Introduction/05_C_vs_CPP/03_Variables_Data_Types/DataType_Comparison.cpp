#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout<<"C vs C++: Data Types\n\n";

	cout << "Common build-in types:\n";
	cout<<"int, char, float, double\n\n";

	cout<<"C:\n";
	cout<<"- Uses char arrays for traditional strings\n";
	cout<<"- C99 provides _Bool; stdbool.h provide bool\n\n";

	cout<<"C++:\n";
	cout<<" - Provides bool as a build-in type\n";
	cout<<" - Provides std::string through <string>\n";
	cout<<" - Supports references and user-defined types\n\n";

	int number = 10;
	string language = "C++";

	cout<<"Example number: "<<number<<endl;
	cout<<"Example string: "<<language<<endl;

	return 0;
}