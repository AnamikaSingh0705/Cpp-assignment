#include <iostream>
using namespace std;

class Book {
private:
    string title, author;
    int pages;

public:
    Book(string t, string a, int p) {
        title = t;
        author = a;
        pages = p;
    }

    void display() {
        cout << "Title: " << title << ", Author: " << author << ", Pages: " << pages << endl;
    }
};

int main() {
    Book b("1984", "George Orwell", 328);
    b.display();
    return 0;
}
