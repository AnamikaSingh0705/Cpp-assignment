#include <iostream>
using namespace std;

class Student {
private:
    string name;
    static int totalStudents;

public:
    Student(string n) {
        name = n;
        totalStudents++;
    }

    void display() {
        cout << "Name: " << name << endl;
    }

    static int getTotalStudents() {
        return totalStudents;
    }
};

int Student::totalStudents = 0;

int main() {
    Student s1("Alice"), s2("Bob"), s3("Charlie");
    s1.display();
    s2.display();
    s3.display();
    cout << "Total students enrolled: " << Student::getTotalStudents() << endl;
    return 0;
}
