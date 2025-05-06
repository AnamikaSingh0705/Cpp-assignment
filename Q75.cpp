#include <iostream>
#include <cmath>
using namespace std;

class Circle {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    friend double calculateArea(const Circle& c);
};

double calculateArea(const Circle& c) {
    return M_PI * c.radius * c.radius;
}

int main() {
    Circle c(5);
    cout << "Area of circle: " << calculateArea(c) << endl;
    return 0;
}
