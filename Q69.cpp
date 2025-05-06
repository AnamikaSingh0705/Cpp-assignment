#include <iostream>
using namespace std;

class Logger {
public:
    Logger() {
        cout << "Logger created." << endl;
    }

    ~Logger() {
        cout << "Logger destroyed. Logging cleanup message..." << endl;
    }
};

int main() {
    Logger log;
    // Do something...
    return 0;
}
