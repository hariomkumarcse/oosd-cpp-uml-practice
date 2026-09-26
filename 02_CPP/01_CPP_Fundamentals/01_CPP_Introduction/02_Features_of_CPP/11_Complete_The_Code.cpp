#include <iostream>

class Student
{
	private:
		int marks;

	public:
		void setMarks(int m)
		{
			this->marks = m;
		}

		void displayMarks() const
		{
			std::cout<<" Marks: "<<marks<<std::endl;
		}
};

int main()
{
	Student student;

	student.setMarks(85);
	student.displayMarks();

	return 0;
}