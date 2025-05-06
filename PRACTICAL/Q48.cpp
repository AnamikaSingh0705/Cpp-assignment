#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, original, sum = 0;
    cout << "Enter a number: ";
    cin >> num;

    original = num;
    while (num != 0) {
        int digit = num % 10;
        sum += digit * digit * digit;
        num /= 10;
    }

    if (sum == original)
        cout << original << " is an Armstrong number." << endl;
    else
        cout << original << " is not an Armstrong number." << endl;

    return 0;
}
