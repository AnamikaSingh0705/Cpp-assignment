#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of terms in the Fibonacci series: ";
    cin >> n;

    int a = 0, b = 1, next;

    cout << "Fibonacci series: ";
    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            cout << a << " ";
            continue;
        }
        if (i == 2) {
            cout << b << " ";
            continue;
        }
        next = a + b;
        cout << next << " ";
        a = b;
        b = next;
    }

    cout << endl;

    return 0;
}
