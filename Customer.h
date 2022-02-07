#pragma once

#include <string>

class Customer {
	std::string name;
	int id;
public:
	Customer(std::string name, int id);
	std::string getName();
	int getId();
};

