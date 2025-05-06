#include <iostream>
using namespace std;

const double PI = 3.14159;

double areaOfCircle(double radius) {
    return PI * radius * radius;
}

int main() {
    double r;
    cout << "Enter radius: ";
    cin >> r;
    cout << "Area = " << areaOfCircle(r) << endl;
    return 0;
}
