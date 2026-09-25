#include <iostream>
#include <string>

class Employee
{
	private:
		std::string name;

	public:
		Employee(const std::string & employeeName)
		: name(employeeName)
	{
		
	}

	virtual void work() const
	{
		std::cout << name << " is working." <<std::endl;
	}

	virtual ~Employee() = default;
};

class Developer : public Employee
{
	public:
		Developer(const std::string & name)
			: Employee(name)
		{

		}

	void work() const override
	{
		std::cout << "Developer is writing code."
			<< std::endl;
	}
};

int main()
{
	Employee* employee = new Developer("Hariom");

	employee->work();

	delete employee;

	return 0;
}