#include <iostream>
using namespace std;

class Vector {
private:
    int arr[5];

public:
    Vector() {
        for (int i = 0; i < 5; ++i)
            arr[i] = i + 1;
    }

    int& operator[](int index) {
        return arr[index];
    }

    void display() {
        for (int i = 0; i < 5; ++i)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main() {
    Vector v;
    v[2] = 10;  // Modify third element
    v.display();
    return 0;
}
