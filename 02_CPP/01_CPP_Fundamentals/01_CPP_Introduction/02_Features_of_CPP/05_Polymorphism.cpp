#include <iostream>

class Animal
{
	public:
		virtual void sound()
		{
			std::cout << "Animal makes a sound." << std::endl;
		}
};

class Dog : public Animal
{
	public : 
		void sound() override
		{
			std::cout << "Dog barks." << std::endl;
		}
};

int main()
{
	Animal* animal = new Dog();

	animal->sound();

	delete animal;

	return 0;
}