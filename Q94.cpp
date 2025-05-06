#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class BigNumber {
private:
    string number; // stored in reverse order for ease

    static string addStrings(const string& a, const string& b) {
        string result;
        int carry = 0;
        int n = max(a.length(), b.length());
        for (int i = 0; i < n || carry; ++i) {
            int digitA = i < a.length() ? a[i] - '0' : 0;
            int digitB = i < b.length() ? b[i] - '0' : 0;
            int sum = digitA + digitB + carry;
            carry = sum / 10;
            result += (sum % 10) + '0';
        }
        return result;
    }

public:
    BigNumber(string num) {
        reverse(num.begin(), num.end());
        number = num;
    }

    BigNumber add(const BigNumber& other) {
        return BigNumber(addStrings(number, other.number));
    }

    void print() {
        string num = number;
        reverse(num.begin(), num.end());
        cout << num << endl;
    }
};
