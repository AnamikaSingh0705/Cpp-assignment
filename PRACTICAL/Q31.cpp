#include <iostream>
using namespace std;

int multiply(int a, int b) {
    return a * b;
}

int main() {
    int x = 4, y = 5;
    cout << "Product = " << multiply(x, y) << endl;
    return 0;
}
