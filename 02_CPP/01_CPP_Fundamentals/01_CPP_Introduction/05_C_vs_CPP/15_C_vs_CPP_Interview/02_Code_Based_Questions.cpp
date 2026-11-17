#include <iostream>
using namespace std;

void display(int number)
{
	cout << "Integer: " << number << endl;
}

void display(double number)
{
	cout<<"Double: "<<number<<endl;
}

void updateValue(int& value)
{
	value = value + 10;
}

class Animal
{
	public:
		virtual void sound() const
		{
			cout << "Animal sound\n";
		}

		virtual ~Animal() = default;
};

class Dog : public Animal
{
	public :
		void sound() const override
		{
			cout << "Dog barks\n";
		}
};

int main()
{
	cout << "Question 1 : \n";

	display(10);
	display(10.5);

	cout << "\nQuestion 2: \n";

	int number = 20;

	updateValue(number);

	cout<<number<<endl;

	cout<<"\nQuestion 3:\n";

	Dog dog;
	Animal* animal = &dog;

	animal->sound();

	return 0;
}