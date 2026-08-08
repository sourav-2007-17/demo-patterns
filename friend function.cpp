#include <iostream>
using namespace std;

// ---------------- FRIEND FUNCTION ----------------

class Box {
private:
    int length = 10;

public:
    // Friend function declaration
    friend int getVolume(Box b);
};

// Friend function definition
// It is NOT a member function of Box
int getVolume(Box b) {
    return b.length * b.length * b.length;
}


// ---------------- FRIEND CLASS ----------------

class Car {
private:
    int horsepower = 200;

    // Entire Mechanic class can access private members of Car
    friend class Mechanic;
};

class Mechanic {
public:
    void checkHP(Car c) {
        cout << "Horsepower: " << c.horsepower << endl;
    }
};


// ---------------- MAIN FUNCTION ----------------

int main() {

    // Friend function example
    Box b;

    cout << "Volume of Box: " << getVolume(b) << endl;

    // Friend class example
    Car c;
    Mechanic m;

    m.checkHP(c);

    return 0;
}
