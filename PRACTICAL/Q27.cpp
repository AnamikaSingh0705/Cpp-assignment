#include <iostream>
using namespace std;

int main() {
    int sum = 0, i = 1;
    while (i <= 50) {
        sum += i;
        i++;
    }
    cout << "Sum of first 50 natural numbers: " << sum << endl;
    return 0;
}

