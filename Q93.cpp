#include <iostream>
using namespace std;

class Time {
private:
    int hours, minutes;

    void normalize() {
        hours += minutes / 60;
        minutes %= 60;
    }

public:
    Time(int h = 0, int m = 0) : hours(h), minutes(m) { normalize(); }

    Time add(const Time& other) {
        return Time(hours + other.hours, minutes + other.minutes);
    }

    Time subtract(const Time& other) {
        int total1 = hours * 60 + minutes;
        int total2 = other.hours * 60 + other.minutes;
        int diff = max(0, total1 - total2);
        return Time(diff / 60, diff % 60);
    }

    bool isGreater(const Time& other) const {
        return (hours * 60 + minutes) > (other.hours * 60 + other.minutes);
    }

    void display() const {
        cout << hours << "h " << minutes << "m" << endl;
    }
};
