#include <iostream>
using namespace std;

class Base {
public:
    void showBase() {
        cout << "Base class" << endl;
    }
};

class Intermediate : public Base {
public:
    void showIntermediate() {
        cout << "Intermediate class derived from Base" << endl;
    }
};

class Derived : public Intermediate {
public:
    void showDerived() {
        cout << "Derived class derived from Intermediate" << endl;
    }
};

int main() {
    Derived d;
    d.showBase();
    d.showIntermediate();
    d.showDerived();
    return 0;
}
