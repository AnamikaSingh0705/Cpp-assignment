#include <iostream>
#include <vector>
using namespace std;

class Polynomial {
private:
    vector<int> coeffs; // coeffs[i] is the coefficient for x^i

public:
    Polynomial(int degree = 0) {
        coeffs.resize(degree + 1, 0);
    }

    void input() {
        for (int i = 0; i < coeffs.size(); ++i) {
            cout << "Enter coefficient for x^" << i << ": ";
            cin >> coeffs[i];
        }
    }

    void print() const {
        for (int i = coeffs.size() - 1; i >= 0; --i) {
            if (coeffs[i] != 0) {
                cout << coeffs[i] << "x^" << i;
                if (i != 0) cout << " + ";
            }
        }
        cout << endl;
    }

    Polynomial add(const Polynomial& other) {
        int maxDeg = max(coeffs.size(), other.coeffs.size());
        Polynomial result(maxDeg - 1);
        for (int i = 0; i < maxDeg; ++i) {
            int a = (i < coeffs.size()) ? coeffs[i] : 0;
            int b = (i < other.coeffs.size()) ? other.coeffs[i] : 0;
            result.coeffs[i] = a + b;
        }
        return result;
    }

    Polynomial multiply(const Polynomial& other) {
        Polynomial result(coeffs.size() + other.coeffs.size() - 2);
        for (int i = 0; i < coeffs.size(); ++i) {
            for (int j = 0; j < other.coeffs.size(); ++j) {
                result.coeffs[i + j] += coeffs[i] * other.coeffs[j];
            }
        }
        return result;
    }
};
