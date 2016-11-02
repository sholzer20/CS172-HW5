#include "Account.h"
#include <iostream>

using namespace std;

double Account::annualInterestRate = 0.015;

int main()
{
	Account account1("George", 1122, 1000);

	account1.deposit(30);
	account1.deposit(40);
	account1.deposit(50);

	account1.withdraw(5);
	account1.withdraw(4);
	account1.withdraw(2);

	account1.printAccount();


	return 0;
}