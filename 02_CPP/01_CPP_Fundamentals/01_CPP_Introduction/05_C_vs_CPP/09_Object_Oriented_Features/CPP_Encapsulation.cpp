#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
	private:
		string holderName;
		int accountNumber;
		double balance;

	public:
		BankAccount(string name, int number, double initialBalance)
		{
			holderName = name;
			accountNumber = number;
			balance = initialBalance >= 0 ? initialBalance : 0;
		}

		void deposit(double amount)
		{
			if(amount > 0)
			{
				balance += amount;
				cout<<"Deposit successful.\n";
			}
			else
			{
				cout<<"Invalid deposit amount.\n";
			}
		}

		void withdraw(double amount)
		{
			if(amount <= 0)
			{
				cout <<"Invalid withdrawal amount.\n";
			}

			else if(amount > balance)
			{
				cout << "Insufficient balance.\n";
			}

			else 
			{
				balance -= amount;
				cout<<"Withdrawal successful.\n";
			}
		}

		void display() const
		{
			cout<<"\nAccount Information\n";
			cout<<"Holder: "<<holderName<<endl;
			cout<<"Account Number: "<<accountNumber<<endl;
			cout<<"Balance: "<<balance<<endl;
		}
};

int main()
{
	BankAccount account("Hariom", 1001, 5000);

	account.deposit(2000);
	account.withdraw(1000);

	account.display();

	return 0;
}