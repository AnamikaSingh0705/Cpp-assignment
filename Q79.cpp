#include <iostream>
using namespace std;

class Vehicle {
public:
    virtual void info() {
        cout << "This is a vehicle." << endl;
    }
};

class Car : public Vehicle {
public:
    void info() override {
        cout << "This is a car." << endl;
    }
};

class Bike : public Vehicle {
public:
    void info() override {
        cout << "This is a bike." << endl;
    }
};

int main() {
    Car car;
    Bike bike;

    Vehicle* v1 = &car;
    Vehicle* v2 = &bike;

    v1->info();
    v2->info();

    return 0;
}
