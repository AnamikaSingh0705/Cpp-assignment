#include <iostream>
using namespace std;

class BankAccount {
private:
    string accountNumber;
    double balance;

public:
    void setAccount(string accNo, double initialBalance) {
        accountNumber = accNo;
        balance = initialBalance;
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Deposited: " << amount << ", New Balance: " << balance << endl;
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << ", Remaining Balance: " << balance << endl;
        } else {
            cout << "Insufficient funds." << endl;
        }
    }

    void display() {
        cout << "Account Number: " << accountNumber << ", Balance: " << balance << endl;
    }
};

int main() {
    BankAccount acc;
    acc.setAccount("BA12345", 500.0);
    acc.deposit(200);
    acc.withdraw(100);
    acc.display();

    return 0;
}
