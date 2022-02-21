#pragma once

#include <vector>
#include "Bank.h"
#include "Customer.h"

class Account {
	Bank* bank;
	float balance;
	Customer* customer;
	int id;
public:
	Account(Bank* bank, float balance, Customer* customer, int id);
	~Account();
	void deposit(float amount);
	void withdraw(float amount);
	void withdraw();
	void display();
	float getBalance();
	int getId();
};

