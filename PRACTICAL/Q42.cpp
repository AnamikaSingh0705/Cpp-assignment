#include <iostream>
using namespace std;

int max(int a, int b) {
    return (a > b) ? a : b;
}

int max(int a, int b, int c) {
    return max(max(a, b), c);
}

int main() {
    cout << "Max of 3 and 7: " << max(3, 7) << endl;
    cout << "Max of 10, 5, and 8: " << max(10, 5, 8) << endl;
    return 0;
}
