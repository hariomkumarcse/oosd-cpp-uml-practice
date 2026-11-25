#include <iostream>
#include <string>

namespace Company
{
	namespace Employee
	{
		int employeeId = 101;
		std::string employeeName = "Rahul";

		void displayEmployee()
		{
			std::cout << "Employee ID: " << employeeId << std::endl;

			std::cout << "Employee Name: " << employeeName << std::endl;
		}
	}

	namespace Department
	{
		std::string departmentName = "Software Development";

		void displayDepartment()
		{
			std::cout<<"Department: "<<departmentName<<std::endl;
		}
	}
}

int main()
{
	Company::Employee::displayEmployee();

	Company::Department::displayDepartment();

	return 0;
}