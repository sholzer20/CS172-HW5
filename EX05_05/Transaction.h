#pragma once
#include <string>
#include "Date.h"
using namespace std;

class Transaction
{
private:
	char type;
	double amount;
	double balance;
	string description;
	Date date;

public:
	Transaction(char type, double amount, double balance, string description);

	char getType();
	double getAmount();
	double getBalance();
	string getDescription();
	Date getDate();

	void setType(char type);
	void setAmount(double amount);
	void setBalance(double balance);
	void setDescription(string description);
	void setDate(int year, int month, int day);

};
