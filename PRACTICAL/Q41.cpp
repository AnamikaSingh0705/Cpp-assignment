#include <iostream>
using namespace std;

const double PI = 3.14159;

// Circle
double area(double radius) {
    return PI * radius * radius;
}

// Rectangle
double area(double length, double width) {
    return length * width;
}

// Triangle
double area(double base, double height, bool isTriangle) {
    return 0.5 * base * height;
}

int main() {
    cout << "Area of circle: " << area(5.0) << endl;
    cout << "Area of rectangle: " << area(4.0, 6.0) << endl;
    cout << "Area of triangle: " << area(3.0, 4.0, true) << endl;
    return 0;
}
