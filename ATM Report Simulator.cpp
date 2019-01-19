// Banking.cpp 
// A C++ class practice assignment that similates a simple ATM report.

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	char accountType;
	bool checking = false;
	bool savings = false;
	double balance;
	double deposits;
	double withdrawls;

	cout << "Is this a checking or savings accout? (c/s)";
	cin >> accountType;
	if (accountType == 'c' || accountType == 'C')
		checking = true;
	else if (accountType == 's' || accountType == 'S')
		savings = true;
	else {
		cout << "Invalid account type";
		return 1;
	}
	cout << "Enter current balance: ";
	cin >> balance;
	cout << "Enter deposits: ";
	cin >> deposits;
	cout << "Enter withdrawls: ";
	cin >> withdrawls;

	balance = balance + deposits - withdrawls;

	if (checking == true)
		cout << "Your checking account balance is now: $" << balance << endl;
	else if (savings)
		cout << "Your savings account balance is now: $" << balance << endl;
    return 0;
}

