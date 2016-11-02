#include "Account.h"

Account::Account()
{
	id = 0;
	balance = 0;
	annualInterestRate = 0;
}

Account::Account(string name, int id, double balance)
{
	this->name = name;
	this->id = id;
	this->balance = balance;
	this->annualInterestRate = .015;
}

int Account::getId()
{
	return id;
}

double Account::getBalance()
{
	return balance;
}

double Account::getAnnualInterestRate()
{
	return annualInterestRate;
}

void Account::setId(int id)
{
	this->id = id;
}

void Account::setBalance(double balance)
{
	this->balance = balance;
}

void Account::setAnnualInterestRate(double annualInterestRate)
{
	this->annualInterestRate = annualInterestRate;

}

double Account::getMonthlyInterestRate() //Monthly rate is the annual rate divided by 12
{
	return annualInterestRate/12;
}

void Account::withdraw(double amount) //amount is withdrawn from balance, and a Transaction object is created and stored in the transactions vector
{
	balance -= amount;
	Transaction withdraw('W', amount, balance, "Withdraw");
	transactions.push_back(withdraw);

}

void Account::deposit(double amount) //amount is deposited to balance, and a Transaction object is created and stored in the transactions vector
{
	balance += amount;
	Transaction deposit('D', amount, balance, "Deposit");
	transactions.push_back(deposit);
}

void Account::printAccount() //Prints all of the member variables in the Account class
{
	cout << "Account Name: " << this->name << "\nInterest Rate: " << this->annualInterestRate << "\nBalance: " << this->balance
		<< "\nTransaction History: \n";
	printTransactions();
}

void Account::printTransactions() //Prints out all of the member variables for the Transaction class
{
	for (int i = 0; i < transactions.size(); i++)
	{
		cout << "Type:" << transactions[i].getType() << "|Amount:" << transactions[i].getAmount() << "|Remaining_Balance:" << 
			transactions[i].getBalance() << "|Description:" << transactions[i].getDescription() << "|Date_of_Transaction:"
			<< transactions[i].getDate().printDate() << endl;
	}
}
