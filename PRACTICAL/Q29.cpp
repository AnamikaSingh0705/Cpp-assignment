#include <iostream>
using namespace std;

// Function prototype
int maxOfThree(int a, int b, int c);

int main() {
    int x = 10, y = 20, z = 15;
    cout << "Maximum: " << maxOfThree(x, y, z) << endl;
    return 0;
}

int maxOfThree(int a, int b, int c) {
    if (a >= b && a >= c)
        return a;
    else if (b >= c)
        return b;
    else
        return c;
}
