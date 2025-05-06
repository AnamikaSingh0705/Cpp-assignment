#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    string position;
    double salary;

public:
    void setDetails(string n, string p, double s) {
        name = n;
        position = p;
        salary = s;
    }

    void display() {
        cout << "Name: " << name << "\nPosition: " << position << "\nSalary: $" << salary << endl;
    }
};

int main() {
    Employee emp;
    emp.setDetails("John Doe", "Manager", 75000);
    emp.display();
    return 0;
}
