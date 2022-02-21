#include "Customer.h"

Customer::Customer(std::string name, int id) {
	this->name = name;
	this->id = id;
}

Customer::~Customer() {
}

int Customer::getId(){
	return id;
}

std::string Customer::getName() {
	return name;
}