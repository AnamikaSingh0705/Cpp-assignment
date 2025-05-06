#include <iostream>
using namespace std;

class Entity {
public:
    virtual void info() {
        cout << "This is an entity" << endl;
    }
};

class Person : public virtual Entity {
public:
    void info() override {
        cout << "This is a person" << endl;
    }
};

class Organization : public virtual Entity {
public:
    void info() override {
        cout << "This is an organization" << endl;
    }
};

class Member : public Person, public Organization {
public:
    void info() override {
        cout << "This is a member of both person and organization" << endl;
    }
};

int main() {
    Member m;
    m.info(); // Member's own implementation
    return 0;
}
