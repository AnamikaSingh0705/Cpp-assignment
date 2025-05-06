#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    void setPerson(string n, int a) {
        name = n;
        age = a;
    }

    void showPerson() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

class Employee : public Person {
private:
    string position;

public:
    void setEmployee(string n, int a, string p) {
        setPerson(n, a);
        position = p;
    }

    void showEmployee() {
        showPerson();
        cout << "Position: " << position << endl;
    }
};

int main() {
    Employee emp;
    emp.setEmployee("Alice", 30, "Manager");
    emp.showEmployee();
    return 0;
}
