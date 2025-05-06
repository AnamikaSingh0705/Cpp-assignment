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

int main() {
    Car cars[3];
    cars[0].setDetails("Toyota", "Camry", 2020);
    cars[1].setDetails("Honda", "Civic", 2019);
    cars[2].setDetails("Ford", "Mustang", 2022);

    for (int i = 0; i < 3; i++) {
        cars[i].display();
    }

    return 0;
}
