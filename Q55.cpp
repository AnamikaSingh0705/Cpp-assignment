#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    void setName(string n) { name = n; }
    void setAge(int a) { age = a; }

    string getName() { return name; }
    int getAge() { return age; }
};

class Student : public Person {
private:
    string studentID;

public:
    void setStudentID(string id) { studentID = id; }
    string getStudentID() { return studentID; }

    void display() {
        cout << "Name: " << name << ", Age: " << age << ", Student ID: " << studentID << endl;
    }
};

int main() {
    Student s;
    s.setName("Bob");
    s.setAge(20);
    s.setStudentID("S12345");
    s.display();

    return 0;
}
