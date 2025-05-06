#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Animal makes a sound." << endl;
    }
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks." << endl;
    }
};

class Cat : public Animal {
public:
    void sound() override {
        cout << "Cat meows." << endl;
    }
};

class Bird : public Animal {
public:
    void sound() override {
        cout << "Bird chirps." << endl;
    }
};

int main() {
    Dog d;
    Cat c;
    Bird b;

    Animal* animals[] = {&d, &c, &b};

    for (Animal* a : animals)
        a->sound();

    return 0;
}
