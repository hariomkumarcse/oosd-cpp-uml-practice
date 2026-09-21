#include <iostream>

class BankAccount
{
	private:
		double balance;

	public:
		void deposit(double amount)
		{
			if(amount > 0)
			{
				balance += amount;
			}
		}

		double getBalance() const
		{
			return balance;
		}
};

int main()
{
	BankAccount account;

	account.deposit(5000);

	std::cout << "Balance: "
		<< account.getBalance()
		<< std::endl;

	return 0;
}