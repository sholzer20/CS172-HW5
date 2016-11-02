#pragma once
#include <string>
#include <vector>
#include <iostream>
#include "Transaction.h"
using namespace std;
class Account 
{
private:
	int id;
	double balance;
	string name;
	vector<Transaction> transactions;

public:
	static double annualInterestRate;
	Account();
	Account(string name, int id, double balance);

	int getId();
	double getBalance();
	double getAnnualInterestRate();

	void setId(int id);
	void setBalance(double balance);
	void setAnnualInterestRate(double annualInterestRate);

	double getMonthlyInterestRate();
	void withdraw(double amount);
	void deposit(double amount);

	void printAccount();
	void printTransactions();

};