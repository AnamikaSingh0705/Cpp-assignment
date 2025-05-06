#include <iostream>
#include <cstdlib> // For atoi
using namespace std;

int main(int argc, char* argv[]) {
    if (argc != 3) {
        cout << "Usage: " << argv[0] << " <int1> <int2>" << endl;
        return 1;
    }

    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    cout << "Sum = " << a + b << endl;

    return 0;
}
