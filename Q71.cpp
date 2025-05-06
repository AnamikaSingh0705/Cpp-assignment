#include <iostream>
using namespace std;

class Fraction {
private:
    int numerator, denominator;

public:
    friend ostream& operator<<(ostream& os, const Fraction& f);
    friend istream& operator>>(istream& is, Fraction& f);
};

ostream& operator<<(ostream& os, const Fraction& f) {
    os << f.numerator << "/" << f.denominator;
    return os;
}

istream& operator>>(istream& is, Fraction& f) {
    cout << "Enter numerator and denominator: ";
    is >> f.numerator >> f.denominator;
    return is;
}

int main() {
    Fraction f;
    cin >> f;
    cout << "Fraction: " << f << endl;
    return 0;
}
