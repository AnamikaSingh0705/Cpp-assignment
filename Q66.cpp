#include <iostream>
using namespace std;

class Matrix {
private:
    int rows, cols;
    int mat[10][10];

public:
    Matrix(int r, int c, int val) {
        rows = r;
        cols = c;
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++)
                mat[i][j] = val;
    }

    void display() {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++)
                cout << mat[i][j] << " ";
            cout << endl;
        }
    }
};

int main() {
    Matrix m(3, 3, 7);
    m.display();
    return 0;
}
