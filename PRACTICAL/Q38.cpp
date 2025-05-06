#include <iostream>
using namespace std;

inline int sum(int a, int b) {
    return a + b;
}

int main() {
    int x = 7, y = 8;
    cout << "Sum = " << sum(x, y) << endl;
    return 0;
}
