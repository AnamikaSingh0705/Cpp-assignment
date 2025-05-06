#include <iostream>
using namespace std;

class Animal {
public:
    void sound() {
        cout << "Animal sound" << endl;
    }
};

class Mammal : virtual public Animal {
};

class Bird : virtual public Animal {
};

class Bat : public Mammal, public Bird {
};

int main() {
    Bat bat;
    bat.sound(); // No ambiguity due to virtual inheritance
    return 0;
}
