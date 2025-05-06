#include <iostream>
using namespace std;

template <typename T>
T maxValue(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    cout << "Max of 3 and 7: " << maxValue(3, 7) << endl;
    cout << "Max of 5.5 and 2.3: " << maxValue(5.5, 2.3) << endl;
    cout << "Max of 'a' and 'z': " << maxValue('a', 'z') << endl;
    return 0;
}
