#include<stdio.h>
#include<string.h>

struct BankAccount
{
	char holderName[50];
	int accountNumber;
	double balance;
};

void deposit(struct BankAccount *account, double amount)
{
	if(amount > 0)
	{
		account->balance += amount;
	}
}

int withdraw(struct BankAccount *account, double amount)
{
	if(amount <= 0 || amount > account -> balance)
	{
		return 0;
	}

	account->balance -= amount;
	return 1;
}

void displayAccount(const struct BankAccount *account)
{
	printf("\nAccount Information\n");
	printf("Holder: %s\n", account->holderName);
	printf("Account Number: %d\n", account->accountNumber);
	printf("Balance: %.2f\n", account->balance);
}

int main(void)
{
	struct BankAccount account;

	strcpy(account.holderName, "Hariom");
	account.accountNumber = 1001;
	account.balance = 5000.0;

	deposit(&account, 2000.0);
	withdraw(&account, 1000.0);

	displayAccount(&account);

	return 0;
}