#include <iostream>

class Vehicle
{
	public:
		void start()
		{
			std::cout << "Vehicle started." << std::endl;
		}
};

class Car : public Vehicle
{
	public:
		void drive()
		{
			std::cout << "Car is driving." << std::endl;
		}
};

int main()
{
	Car car;

	car.start();
	car.drive();

	return 0;
}