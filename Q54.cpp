#include <iostream>
using namespace std;

class Person {
private:
    string name;
    int age;

public:
    void setName(string n) { name = n; }
    void setAge(int a) { age = a; }

    string getName() { return name; }
    int getAge() { return age; }
};

int main() {
    Person p;
    p.setName("Alice");
    p.setAge(30);

    cout << "Name: " << p.getName() << ", Age: " << p.getAge() << endl;
    return 0;
}
