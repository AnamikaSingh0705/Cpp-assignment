#include <iostream>
#include <fstream>
using namespace std;

class FileHandler {
private:
    ofstream file;

public:
    FileHandler(const string &filename) {
        file.open(filename);
        if (file.is_open())
            file << "File opened and writing from constructor.\n";
    }

    ~FileHandler() {
        if (file.is_open()) {
            file << "File is closing from destructor.\n";
            file.close();
        }
    }
};

int main() {
    FileHandler fh("example.txt");
    return 0;
}
