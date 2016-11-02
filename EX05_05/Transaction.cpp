#include "Transaction.h"

Transaction::Transaction(char type, double amount, double balance, string description)
{
	this->type = type;
	this->amount = amount;
	this->balance = balance;
	this->description = description;
}

char Transaction::getType()
{
	return type;
}

double Transaction::getAmount()
{
	return amount;
}

double Transaction::getBalance()
{
	return balance;
}

string Transaction::getDescription()
{
	return description;
}

Date Transaction::getDate() //Gets the date object
{
	return date;
}

void Transaction::setType(char type)
{
	this->type = type;
}

void Transaction::setAmount(double amount)
{
	this->amount = amount;
}

void Transaction::setBalance(double balance)
{
	this->balance = balance;
}

void Transaction::setDescription(string description)
{
	this->description = description;
}

void Transaction::setDate(int year, int month, int day) //Sets date to passed values
{
	this->date.setDate(year, month, day);
}
