#include <iostream>
using namespace std;

class DynamicArray {
private:
    int *arr;
    int size;

public:
    DynamicArray(int s) {
        size = s;
        arr = new int[size];
        for (int i = 0; i < size; i++)
            arr[i] = i + 1;
    }

    void display() {
        for (int i = 0; i < size; i++)
            cout << arr[i] << " ";
        cout << endl;
    }

    ~DynamicArray() {
        delete[] arr;
        cout << "Memory deallocated in destructor." << endl;
    }
};

int main() {
    DynamicArray da(5);
    da.display();
    return 0;
}
