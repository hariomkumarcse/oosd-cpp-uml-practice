#include <iostream>
using namespace std;

struct CStudent
{
	int marks;
};

class CPPStudent
{
	private:
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
	CStudent student1;
	student1.marks = 80;

	CPPStudent student2;
	student2.setMarks(90);

	cout<<"C-style structure: "
		<<student1.marks<<endl;

	cout<<"C++ class: "
		<<student2.getMarks()<<endl;

	cout<<"\nFind the differences:\n";

	return 0;
}