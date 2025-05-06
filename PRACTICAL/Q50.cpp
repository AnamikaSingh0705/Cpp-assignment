#include <iostream>
using namespace std;

void greetEnglish() {
    cout << "Hello!" << endl;
}

void greetSpanish() {
    cout << "¡Hola!" << endl;
}

void greetUser(void (*greetFunc)()) {
    cout << "Greeting: ";
    greetFunc(); // callback
}

int main() {
    greetUser(greetEnglish);
    greetUser(greetSpanish);
    return 0;
}
