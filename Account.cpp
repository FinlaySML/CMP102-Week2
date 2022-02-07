#include "Account.h"
#include <iostream>

Account::Account(Bank b, float balance, Customer c) : bank(b), customer(c){
	this->balance = balance;
}

void Account::deposit(float amount){
	balance += amount;
}

void Account::withdraw(float amount) {
	balance -= amount;
}

void Account::display() {
	std::cout << "Name: " << customer.getName() << std::endl;
	std::cout << "ID: " << customer.getId() << std::endl;
	std::cout << "Bank: " << bank.getName() << std::endl;
	std::cout << "Balance: $" << balance << std::endl;
}

float Account::getBalance(){
	return balance;
}
