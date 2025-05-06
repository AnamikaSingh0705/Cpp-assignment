#include <iostream>
using namespace std;

int main() {
    int num, binary[32], index = 0;

    cout << "Enter a decimal number: ";
    cin >> num;

    if (num == 0) {
        cout << "Binary: 0" << endl;
        return 0;
    }

    while (num > 0) {
        binary[index++] = num % 2;
        num /= 2;
    }

    cout << "Binary: ";
    for (int i = index - 1; i >= 0; i--)
        cout << binary[i];
    cout << endl;

    return 0;
}
