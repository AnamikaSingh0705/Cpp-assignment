#include <iostream>
using namespace std;

class Math {
public:
    static int add(int a, int b) { return a + b; }
    static int subtract(int a, int b) { return a - b; }
    static int multiply(int a, int b) { return a * b; }
    static double divide(double a, double b) { return b != 0 ? a / b : 0; }
};

int main() {
    cout << "Add: " << Math::add(10, 5) << endl;
    cout << "Subtract: " << Math::subtract(10, 5) << endl;
    cout << "Multiply: " << Math::multiply(10, 5) << endl;
    cout << "Divide: " << Math::divide(10, 5) << endl;
    return 0;
}
