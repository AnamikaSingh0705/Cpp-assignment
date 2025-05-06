#include <iostream>
using namespace std;

class Distance {
private:
    int feet, inches;

public:
    Distance(int f, int i) : feet(f), inches(i) {}

    friend Distance addDistance(const Distance& d1, const Distance& d2);

    void display() {
        cout << feet << " feet " << inches << " inches" << endl;
    }
};

Distance addDistance(const Distance& d1, const Distance& d2) {
    int totalInches = d1.inches + d2.inches;
    int totalFeet = d1.feet + d2.feet + (totalInches / 12);
    totalInches %= 12;
    return Distance(totalFeet, totalInches);
}

int main() {
    Distance d1(5, 8), d2(3, 11);
    Distance d3 = addDistance(d1, d2);
    d3.display();
    return 0;
}
