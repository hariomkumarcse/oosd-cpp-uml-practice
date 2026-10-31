#include <iostream>
using namespace std;

struct PublicStudent
{
	int marks;
};

class PrivateStudent
{
	int marks;

	public:
		void setMarks(int value)
		{
			marks = value;
		}

		int getMarks() const
		{
			return marks;
		}
};

int main()
{
	cout << "Structure vs Class\n";

	PublicStudent student1;
	student1.marks = 90;

	PrivateStudent student2;
	student2.setMarks(85);

	cout << "C++ struct marks: " << student1.marks << endl;
	cout << "C++ class marks: " << student2.getMarks() << endl;

	cout << "\nDefault member access:\n";
	cout << "C++ struct: public\n";
	cout << "C++ class: private\n";

	return 0;
}