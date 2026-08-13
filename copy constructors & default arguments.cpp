#include <iostream>
#include <string>
using namespace std;

class student {
public:
    string name;
    int age;

    // Normal / Parameterized constructor
    student(string n, int a) : name(n), age(a) {}

    // Copy constructor
    // const reference lena recommended hai
    student(const student &other) {
        name = other.name;
        age = other.age;

        cout << "Copy constructor called!" << endl;
    }

    void show() {
        cout << name << " - " << age << endl;
    }
};

int main() {

    // Normal constructor
    student s1("amit", 20);

    // Copy constructor call
    student s2(s1);

    // Copy constructor call
    student s3 = s1;

    // s2 ko change karne se s1 affect nahi hoga
    s2.name = "priya";

    cout << "s1: ";
    s1.show();

    cout << "s2: ";
    s2.show();

    cout << "s3: ";
    s3.show();

    return 0;
}
