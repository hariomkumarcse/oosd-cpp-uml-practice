#include <iostream>

class Parent
{
	public:
		virtual void show()
		{
			std::cout << "Parent" << std::endl;
		}
};

class Child : public Parent
{
	public:
		void show() override
		{
			std::cout << "Child" << std::endl;
		}
};

int main()
{
	Parent* ptr = new Child();

	ptr->show();

	delete ptr;

	return 0;
}