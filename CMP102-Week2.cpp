#include <iostream>
#include "Account.h"

using namespace std;

const int ACCOUNT_COUNT = 3;

int main() {
    Bank bank("Royal Bank of Scotland");
    Customer customer("Bob", 128);
    Account* accounts[3];
    for (int a = 0; a < ACCOUNT_COUNT; a++) {
        cout << "Enter ID for account " << a << ": " << endl;
        int id;
        cin >> id;
        accounts[a] = new Account(&bank, 0.0f, &customer, id);
    }
    bool quit = false;
    Account* account = accounts[0];
    while (!quit) {
        cout << "Choose a menu option:" << endl;
        cout << "(0) Quit" << endl;
        cout << "(1) Display Balance" << endl;
        cout << "(2) Deposit" << endl;
        cout << "(3) Withdraw" << endl;
        cout << "(4) Withdraw £10" << endl;
        cout << "(5) Check for loan" << endl;
        cout << "(6) Calculate interest" << endl;
        cout << "(7) Switch account" << endl;
        int answer;
        cin >> answer;
        switch (answer) {
            case 0: {
                quit = true;
                break;
            }
            case 1: {
                cout << "Balance: £" << account->getBalance() << endl;
                break;
            }
            case 2: {
                cout << "Enter amount: " << endl;
                float amount;
                cin >> amount;
                account->deposit(amount);
                break;
            }
            case 3: {
                cout << "Enter amount: " << endl;
                float amount;
                cin >> amount;
                account->withdraw(amount);
                break;
            }
            case 4: {
                account->withdraw();
                break;
            }
            case 5: {
                cout << "Enter loan amount: " << endl;
                float amount;
                cin >> amount;
                cout << "Can get loan?: " << to_string(bank.canGetLoan(account->getBalance(), amount)) << endl;
                break;
            }
            case 6: {
                cout << "Enter interest percentage: " << endl;
                float percent;
                cin >> percent;
                cout << "Interest: " << bank.calculateInterest(account->getBalance(), percent) << endl;
                break;
            }
            case 7: {
                cout << "Enter account ID: " << endl;
                int id;
                cin >> id;
                bool found;
                for (int a = 0; a < ACCOUNT_COUNT; a++) {
                    if (accounts[a] != NULL) {
                        if (accounts[a]->getId() == id) {
                            account = accounts[a];
                            found = true;
                            break;
                        }
                    }
                }
                if (!found) cout << "Account not found" << endl;
                break;
            }
        }
    }
}
