#include <iostream>
using namespace std;

class Parent {
public:
    void showParent() {
        cout << "This is the Parent class." << endl;
    }
};

class Child1 : public Parent {
public:
    void showChild1() {
        cout << "This is Child1 derived from Parent." << endl;
    }
};

class Child2 : public Parent {
public:
    void showChild2() {
        cout << "This is Child2 derived from Parent." << endl;
    }
};

int main() {
    Child1 c1;
    Child2 c2;
    c1.showParent();
    c1.showChild1();
    c2.showParent();
    c2.showChild2();
    return 0;
}
