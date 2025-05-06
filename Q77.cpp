#include <iostream>
using namespace std;

class Shape {
public:
    virtual void displayArea() = 0; // Pure virtual function
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    void displayArea() override {
        cout << "Circle area: " << 3.14159 * radius * radius << endl;
    }
};

class Rectangle : public Shape {
private:
    double length, width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    void displayArea() override {
        cout << "Rectangle area: " << length * width << endl;
    }
};

class Triangle : public Shape {
private:
    double base, height;

public:
    Triangle(double b, double h) : base(b), height(h) {}

    void displayArea() override {
        cout << "Triangle area: " << 0.5 * base * height << endl;
    }
};

int main() {
    Circle c(4);
    Rectangle r(5, 6);
    Triangle t(4, 3);

    Shape* shapes[] = {&c, &r, &t};

    for (Shape* s : shapes)
        s->displayArea();

    return 0;
}
