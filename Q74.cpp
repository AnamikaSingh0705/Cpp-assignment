#include <iostream>
using namespace std;

class Box {
private:
    int length, width, height;

public:
    Box(int l, int w, int h) : length(l), width(w), height(h) {}

    friend int totalVolume(const Box& b1, const Box& b2);
};

int totalVolume(const Box& b1, const Box& b2) {
    int vol1 = b1.length * b1.width * b1.height;
    int vol2 = b2.length * b2.width * b2.height;
    return vol1 + vol2;
}

int main() {
    Box box1(2, 3, 4), box2(1, 2, 3);
    cout << "Total volume: " << totalVolume(box1, box2) << endl;
    return 0;
}
