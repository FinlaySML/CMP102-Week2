#pragma once

#include <string>

class Bank {
	std::string name;
public:
	Bank(std::string name);
	~Bank();
	std::string getName();
	float calculateInterest(float balance, float percent);
	bool canGetLoan(float balance, float amount);
};

