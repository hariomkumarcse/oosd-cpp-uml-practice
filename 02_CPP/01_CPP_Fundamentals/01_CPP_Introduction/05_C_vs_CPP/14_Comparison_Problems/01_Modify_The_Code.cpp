#include <iostream>
#include <vector>
using namespace std;

int calculate(int a, int b)
{
	return a+b;
}

int calculate(int a, int b, int c)
{
	return a+b+c;
}

double calculate(double a, double c)
{
	return a+c;
}

class Calculator
{
	private:
		vector<int> numbers;

	public:
		void addNumber(int num)
		{
			numbers.push_back(num);
		}

		void displayNumber()
		{
			cout<<"Numbers: ";

			for(int num : numbers)
			{
				cout<<num<<" ";
			}

			cout<<endl;
		}

		int getTotal()
		{
			int total = 0;

			for(int num : numbers)
			{
				total += num;
			}
			return total;
		}	
};

int main()
{
	cout<<"Two Numbers: "
		<<calculate(10, 20)<<endl;

	cout<<"Three Numbers: "
		<<calculate(10,20,30)<<endl;

	cout<<"Decimal Numbers: "
		<<calculate(2.5, 3.5)<<endl;

	Calculator calculator;

	calculator.addNumber(10);
	calculator.addNumber(20);
	calculator.addNumber(30);

	calculator.displayNumber();

	cout<<"Total: "<<calculator.getTotal()<<endl;

	return 0;
}