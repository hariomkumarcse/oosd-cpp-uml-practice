#include <iostream>

class BankAccount
{
	private:
		double balance = 0;

	public:
		void deposit(double amount)
		{
			balance = balance+amount;
		}

		void display()
		{
			std::cout<<balance<<std::endl;
		}
};

int main()
{
	BankAccount account;

	account.deposit(1000);
	account.display();

	return 0;
}