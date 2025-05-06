#include <iostream>
using namespace std;

class Date {
private:
    int day, month, year;

public:
    Date(int d, int m, int y) : day(d), month(m), year(y) {}

    bool operator==(const Date& other) {
        return day == other.day && month == other.month && year == other.year;
    }
};

int main() {
    Date d1(1, 1, 2024), d2(1, 1, 2024), d3(2, 1, 2024);

    if (d1 == d2)
        cout << "Dates are equal.\n";
    else
        cout << "Dates are not equal.\n";

    if (d1 == d3)
        cout << "Dates are equal.\n";
    else
        cout << "Dates are not equal.\n";

    return 0;
}
