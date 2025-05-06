#include <iostream>
#include <cmath>
using namespace std;

double compoundInterest(double principal, double rate = 5.0, int time = 2) {
    return principal * pow((1 + rate / 100), time);
}

int main() {
    cout << "Compound Interest = " << compoundInterest(1000) << endl;
    cout << "Custom CI = " << compoundInterest(1000, 7.5, 3) << endl;
    return 0;
}
