#include <iostream>
using namespace std;

void doubleArray(int (&arr)[5]) {
    for (int i = 0; i < 5; i++) {
        arr[i] *= 2;
    }
}

int main() {
    int myArray[5] = {1, 2, 3, 4, 5};

    doubleArray(myArray);

    cout << "Modified array: ";
    for (int i = 0; i < 5; i++) {
        cout << myArray[i] << " ";
    }
    cout << endl;

    return 0;
}
