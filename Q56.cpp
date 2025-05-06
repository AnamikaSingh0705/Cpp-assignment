#include <iostream>
using namespace std;

class Car {
private:
    string make, model;
    int year;

public:
    void setDetails(string m, string mo, int y) {
        make = m;
        model = mo;
        year = y;
    }

    void display() {
        cout << "Car: " << year << " " << make << " " << model << endl;
    }
};
