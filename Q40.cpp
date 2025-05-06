#include <iostream>
#define MAX(a, b) ((a) > (b) ? (a) : (b))  // Macro

using namespace std;

inline int max_inline(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int x = 10, y = 20;

    cout << "Macro max: " << MAX(x, y) << endl;
    cout << "Inline max: " << max_inline(x, y) << endl;

    // Edge case to show macro pitfalls
    cout << "Macro max of ++x, ++y: " << MAX(++x, ++y) << endl; // Evaluates both multiple times!
    x = 10; y = 20;
    cout << "Inline max of ++x, ++y: " << max_inline(++x, ++y) << endl; // Evaluates safely

    return 0;
}
