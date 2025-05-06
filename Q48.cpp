#include <iostream>
using namespace std;

int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }

int main() {
    int (*operations[3])(int, int) = { add, subtract, multiply };

    int x = 10, y = 5;
    cout << "Add: " << operations[0](x, y) << endl;
    cout << "Subtract: " << operations[1](x, y) << endl;
    cout << "Multiply: " << operations[2](x, y) << endl;

    return 0;
}
