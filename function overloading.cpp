#include <iostream>
#include <string>
using namespace std;

// Function Overloading
// Same function name, but different parameters

int add(int a, int b) {
    cout << "int add" << endl;
    return a + b;
}

double add(double a, double b) {
    cout << "double add" << endl;
    return a + b;
}

int add(int a, int b, int c) {
    cout << "three int add" << endl;
    return a + b + c;
}

string add(string a, string b) {
    cout << "string concatenation" << endl;
    return a + b;
}

int main() {

    cout << add(2, 3) << endl;           // int add

    cout << add(2.5, 6.4) << endl;       // double add

    cout << add(1, 2, 9) << endl;        // three int add

    cout << add("hello", "world") << endl; // string concatenation

    return 0;
}
