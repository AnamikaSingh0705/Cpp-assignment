#include <iostream>
using namespace std;

class Base {
public:
    void showBase() {
        cout << "Base class" << endl;
    }
};

class Derived1 : virtual public Base {
public:
    void showDerived1() {
        cout << "Derived1 class" << endl;
    }
};

class Derived2 : virtual public Base {
public:
    void showDerived2() {
        cout << "Derived2 class" << endl;
    }
};

class Derived3 : public Derived1, public Derived2 {
public:
    void showDerived3() {
        cout << "Derived3 class from Derived1 and Derived2" << endl;
    }
};

int main() {
    Derived3 d3;
    d3.showBase();      // Resolved via virtual inheritance
    d3.showDerived1();
    d3.showDerived2();
    d3.showDerived3();
    return 0;
}
