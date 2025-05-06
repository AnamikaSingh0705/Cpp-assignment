#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() {
        cout << "Drawing a shape" << endl;
    }
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a circle" << endl;
    }
};

int main() {
    Shape* shapePtr;
    Circle circle;
    shapePtr = &circle;
    shapePtr->draw(); // Calls Circle::draw()
    return 0;
}
