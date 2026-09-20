#include <iostream>
#include <string>

int main()
{
	std::string name;
	int age;

	std::cout << "Enter your name: ";
	std::cin >> name;

	std::cout << "Enter your age: ";
	std::cin >> age;

	std::cout <<"\n--- User Information ---" <<std::endl;
	std::cout << "Name: " << name << std::endl;
	std::cout << "Age: " << age << std::endl;

	return 0;
}