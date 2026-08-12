#include <iostream>
using namespace std;

int x = 100;  // Global variable

class myclass {
public:
    int x = 50;  // Class data member

    void show();  // Function declaration
};

// Class ke bahar member function define karna
void myclass::show() {
    cout << "Local/Class x: " << x << endl;   // 50
    cout << "Global x: " << ::x << endl;      // 100
}

// Namespace
namespace math {
    int add(int a, int b) {
        return a + b;
    }
}

// Static member example
class student {
public:
    static int count;

    static void showcount() {
        cout << "Student count: " << count << endl;
    }
};

// Static variable definition
int student::count = 10;

int main() {

    // Object of myclass
    myclass obj;
    obj.show();

    // Namespace access
    cout << "Addition: " << math::add(3, 4) << endl;

    // Static member access
    student::showcount();

    return 0;
}
