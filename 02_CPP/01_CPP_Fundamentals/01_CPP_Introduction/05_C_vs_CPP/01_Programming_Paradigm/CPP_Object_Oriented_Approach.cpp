#include <iostream>
using namespace std;

class Student
{
	private:
		int math;
		int science;
		int english;

	public:
		Student(int m, int s, int e)
		{
			math = m;
			science = s;
			english = e;
		}

		int calculateTotal() const
		{
			return math + science + english;
		}

		void display() const
		{
			cout<<"Student Marks - C++\n";
			cout<<"Math: "<<math<<endl;
			cout<<"Science: "<<science<<endl;
			cout<<"English: "<<english<<endl;
			cout<<"Total Marks: "<<calculateTotal()<<endl;
		}
};

int main()
{
	Student student(85, 90, 95);
	student.display();
}