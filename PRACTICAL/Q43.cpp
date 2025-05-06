#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter how many even numbers to print: ";
    cin >> n;

    cout << "First " << n << " even numbers: ";
    for (int i = 1; i <= n; i++) {
        cout << 2 * i << " ";
    }
    cout << endl;

    return 0;
}
