#include <iostream>
using namespace std;

void print(int value) {
    cout << "Integer: " << value << endl;
}

void print(float value) {
    cout << "Float: " << value << endl;
}

void print(string value) {
    cout << "String: " << value << endl;
}

int main() {
    print(42);
    print(3.14f);
    print("Hello, World!");
    return 0;
}
