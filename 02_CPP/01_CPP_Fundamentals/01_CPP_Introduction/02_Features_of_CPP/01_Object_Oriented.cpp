#include <iostream>
#include <string>

class Student
{
	private:
		std::string name;
		int age;

	public:
		void setData(const std::string& studentName, int studentAge)
		{
			name = studentName;
			age = studentAge;
		}

	void displayData() const
	{
		std::cout << "Name: " << name << std::endl;
		std::cout << "Age: " << age << std::endl;
	}
};

int main()
{
	Student student;

	student.setData("Hariom", 20);
	student.displayData();

	return 0;
}