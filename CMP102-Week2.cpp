#include <iostream>
#include "Account.h"

int main() {
    Bank bank("Santander");
    Customer customer("Me", 128);
    Account account(bank, 0.0f, customer);
    account.deposit(100.0f);
    account.withdraw(10.0f);
    account.display();
    float bal = account.getBalance();
    account.deposit(bal);
    account.display();

    //Loan
    std::cout << bank.canGetLoan(100.0f, 100.0f) << std::endl;
    std::cout << bank.canGetLoan(100.0f, 199.0f) << std::endl;
    std::cout << bank.canGetLoan(100.0f, 200.0f) << std::endl;

    //Interest
    std::cout << bank.calculateInterest(300.0f, 1.0f) << std::endl;
    std::cout << bank.calculateInterest(300.0f, 5.0f) << std::endl;
    std::cout << bank.calculateInterest(300.0f, 50.0f) << std::endl;
}
