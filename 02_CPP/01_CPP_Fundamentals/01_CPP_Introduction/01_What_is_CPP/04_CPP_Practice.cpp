#include <iostream>

int main()
{
	std::string name;
	std::string collegeName;
	std::string branch;
	std::string semester;
	std::string careerGoal;

	std::cout << "Enter your name: ";
	std::cin >> name;

	std::cout << "Enter your College Name: ";
	std::cin >> collegeName;

	std::cout << "Enter your Branch: ";
	std::cin >> branch;

	std::cout << "Enter your current semester: ";
	std::cin >> semester;

	std::cout << "Enter your Career Goal: ";
	std::cin >> careerGoal;

	std::cout << "\n--- Student Details ---" << std::endl;
	std::cout << "Name: " << name << std::endl;
	std::cout << "College Name: " << collegeName << std::endl;
	std::cout << "Branch: " << branch << std::endl;
	std::cout << "Semester: " << semester << std::endl;
	std::cout << "Career Goal: " << careerGoal << std::endl;

	return 0;
}