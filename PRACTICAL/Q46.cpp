#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    num = abs(num);  // Optional: handle negative input

    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }

    cout << "Sum of digits = " << sum << endl;
    return 0;
}
