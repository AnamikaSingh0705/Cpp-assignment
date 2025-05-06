#include <iostream>
#define SQUARE(x) ((x) * (x))  // Macro

using namespace std;

inline int square_inline(int x) {  // Inline function
    return x * x;
}

int main() {
    int a = 4;

    cout << "Macro square: " << SQUARE(a) << endl;
    cout << "Inline square: " << square_inline(a) << endl;

    // Caution with macros:
    cout << "Macro square of (a+1): " << SQUARE(a + 1) << endl;       // Incorrect: expands to (a+1)*(a+1)
    cout << "Inline square of (a+1): " << square_inline(a + 1) << endl; // Correct

    return 0;
}
