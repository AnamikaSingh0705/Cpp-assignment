#include <iostream>
using namespace std;

void incrementByTen(int &n) {
    n += 10;
}

int main() {
    int value = 15;
    incrementByTen(value);
    cout << "Value after increment: " << value << endl;
    return 0;
}
