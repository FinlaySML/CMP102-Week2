#include "Account.h"
#include <iostream>

Account::Account(Bank* bank, float balance, Customer* customer, int id){
	this->balance = balance;
	this->bank = bank;
	this->customer = customer;
	this->id = id;
}

Account::~Account() {
}

void Account::deposit(float amount){
	balance += amount;
}

void Account::withdraw(float amount) {
	balance -= amount;
}

void Account::withdraw() {
	balance -= 10.0f;
}

void Account::display() {
	std::cout << "Name: " << customer->getName() << std::endl;
	std::cout << "ID: " << customer->getId() << std::endl;
	std::cout << "Bank: " << bank->getName() << std::endl;
	std::cout << "Balance: $" << balance << std::endl;
}

float Account::getBalance(){
	return balance;
}

int Account::getId() {
	return this->id;
}
