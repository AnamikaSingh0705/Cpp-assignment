#include <iostream>
using namespace std;

class Point {
private:
    int x, y;

public:
    Point() {
        x = 0;
        y = 0;
    }

    Point(int a, int b) {
        x = a;
        y = b;
    }

    Point(const Point &p) {
        x = p.x;
        y = p.y;
    }

    void display() {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Point p1;
    Point p2(10, 20);
    Point p3 = p2;

    p1.display();
    p2.display();
    p3.display();

    return 0;
}
