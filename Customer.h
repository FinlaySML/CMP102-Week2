#pragma once

#include <string>

class Customer {
	std::string name;
	int id;
public:
	Customer(std::string name, int id);
	~Customer();
	std::string getName();
	int getId();
};

