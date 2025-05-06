#include <iostream>
using namespace std;

class Library {
private:
    string secretCode = "XYZ123"; // Not accessible outside the class

protected:
    int books = 1000; // Accessible in derived classes

public:
    string name;

    Library(string n) : name(n) {}

    void displayPublic() {
        cout << "Library Name: " << name << endl;
    }

    void showPrivate() {
        cout << "Private secret code: " << secretCode << endl;
    }

    void showProtected() {
        cout << "Protected books count: " << books << endl;
    }
};

class Branch : public Library {
public:
    Branch(string n) : Library(n) {}

    void accessProtected() {
        cout << "Books in branch (protected): " << books << endl;
    }
};

int main() {
    Library lib("Central Library");
    lib.displayPublic();
    lib.showPrivate();
    lib.showProtected();

    Branch br("Branch Library");
    br.displayPublic();
    br.accessProtected();
    return 0;
}
