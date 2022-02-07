#pragma once

#include <vector>
#include "Bank.h"
#include "Customer.h"

class Account {
	Bank bank;
	float balance;
	Customer customer;
public:
	Account(Bank bank, float balance, Customer customer);
	void deposit(float amount);
	void withdraw(float amount);
	void display();
	void canTakeLoan();
	void calculateInterest(float percent);
	float getBalance();
};

