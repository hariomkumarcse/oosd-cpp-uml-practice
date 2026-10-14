#include <iostream>
using namespace std;

int main()
{
	char grade = 'A';
	char section = 'B';
	char symbol = '#';

	cout<<"Grade: "<<grade<<'\n';
	cout<<"Section: "<<section<<'\n';
	cout<<"Symbol: "<<symbol<<'\n';

	char letter = 'A';
	cout<<"Character: "<<letter<<'\n';
	cout<<"ASCII Value: "<<static_cast<int>(letter)<<'\n';

	return 0;
}