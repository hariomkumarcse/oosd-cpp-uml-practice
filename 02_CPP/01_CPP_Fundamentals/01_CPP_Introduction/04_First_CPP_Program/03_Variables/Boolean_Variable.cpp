#include <iostream>
using namespace std;

int main()
{
	bool isStudent = true;
	bool hasPassed = false;

	cout << boolalpha;
	cout << "Is Student: " << isStudent <<'\n';
	cout << "Has Passed: " << hasPassed <<'\n';

	int marks = 75;
	bool eligible = marks >= 40;

	cout << "Eligible: " << eligible << '\n';

	bool canApply = isStudent && eligible;
	cout << "Can Apply: " << canApply << '\n';

	return 0;
}