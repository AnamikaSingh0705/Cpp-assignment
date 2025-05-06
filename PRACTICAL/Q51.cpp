#include <iostream>
using namespace std;

int main() {
    int evenSum = 0, oddSum = 0;

    for (int i = 2; i <= 100; i += 2)
        evenSum += i;

    for (int i = 1; i <= 99; i += 2)
        oddSum += i;

    cout << "Sum of even numbers (1-100): " << evenSum << endl;
    cout << "Sum of odd numbers (1-100): " << oddSum << endl;

    return 0;
}
