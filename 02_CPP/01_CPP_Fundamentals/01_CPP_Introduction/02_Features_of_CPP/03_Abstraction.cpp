#include <iostream>

class Car
{
	public:
		void start()
		{
			startEngine();
			std::cout << "Car Stared." << std::endl;
		}

	private:
		void startEngine()
		{
			std::cout << "Engine started internally." << std::endl;
		}
};

int main()
{
	Car car;

	car.start();

	return 0;
}