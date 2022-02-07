#include "Bank.h"

Bank::Bank(std::string name){
	this->name = name;
}
std::string Bank::getName(){
	return name;
}

float Bank::calculateInterest(float balance, float percent){
	return balance*(percent / 100.0f);
}

bool Bank::canGetLoan(float balance, float amount){
	if(amount < balance*2.0f){
		return true;
	}
	return false;
}