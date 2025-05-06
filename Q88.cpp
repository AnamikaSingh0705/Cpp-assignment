#include <iostream>
using namespace std;

class Employee {
public:
    virtual void showDetails() {
        cout << "Employee details" << endl;
    }
};

class Manager : public Employee {
public:
    void showDetails() override {
        cout << "Manager details" << endl;
    }
};

int main() {
    Employee* emp;
    Manager mgr;
    emp = &mgr;
    emp->showDetails(); // Calls Manager::showDetails
    return 0;
}
