#include <iostream>
#include <cmath>
using namespace std;

double power(double base, int exponent = 2) {
    return pow(base, exponent);
}

int main() {
    cout << "5^2 = " << power(5) << endl;
    cout << "3^4 = " << power(3, 4) << endl;
    return 0;
}
