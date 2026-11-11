#include <iostream>
#include <vector>
#include <string>
#include <memory>
#include <algorithm>
using namespace std;

class Student
{
	private:
		string name;
		int age;
		double marks;

	public:
		Student(string n, int a, double m) : name(std::move(n)), age(a), marks(m)
		{

		}

		void display() const
		{
			cout<<"Name: "<<name<<endl;
			cout<<"Age: "<<age<<endl;
			cout<<"Marks: "<<marks<<endl;
		}

		double getMarks() const
		{
			return marks;
		}
};

int main()
{
	cout << "Modern C++ Approach\n\n";

	auto studentName = string("Hariom");
	vector<int> numbers = {10, 20, 30, 40, 50};

	cout<<"Student: "<<studentName<<endl;

	cout<<"Numbers: ";

	for(const auto& number : numbers)
	{
		cout<<number<<endl;
	}

	int total = 0;

	for_each(numbers.begin(), numbers.end(), [&total] (int number)
	{
		total += number;
	});

	cout<<"\nTotal: "<<total<<endl;

	unique_ptr<Student> student = make_unique<Student>("Hariom", 20, 90.5);

	cout<<"\nStudent Details:\n";
	student->display();

	cout<<"\nMemory is automatically managed.\n";

	return 0;
}