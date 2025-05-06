#include <iostream>
using namespace std;

class Account {
private:
    string accountNumber;
    double balance;

public:
    void setDetails(string accNum, double bal) {
        accountNumber = accNum;
        balance = bal;
    }

    string getAccountNumber() {
        return accountNumber;
    }

    double getBalance() {
        return balance;
    }

    void deposit(double amount) {
        balance += amount;
    }

    void withdraw(double amount) {
        if (amount <= balance)
            balance -= amount;
        else
            cout << "Insufficient funds" << endl;
    }
};

int main() {
    Account acc;
    acc.setDetails("123ABC", 1000.0);
    acc.deposit(500);
    acc.withdraw(200);
    cout << "Account Number: " << acc.getAccountNumber() << endl;
    cout << "Balance: " << acc.getBalance() << endl;
    return 0;
}
