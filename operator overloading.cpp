#include <iostream>
using namespace std;

class complex {
public:
    float real, imag;

    // Constructor
    complex(float r = 0, float i = 0) : real(r), imag(i) {}

    // + operator overload
    complex operator+(const complex &other) {
        return complex(real + other.real,
                       imag + other.imag);
    }

    // == operator overload
    bool operator==(const complex &other) {
        return (real == other.real && imag == other.imag);
    }

    // << operator overload
    // Friend function se private/protected members bhi access kar sakte hain
    friend ostream& operator<<(ostream &os, const complex &c) {
        os << c.real << "+" << c.imag << "i";
        return os;
    }
};

int main() {

    complex c1(3, 4);
    complex c2(1, 2);

    // + operator
    complex c3 = c1 + c2;

    // Output: 4+6i
    cout << c3 << endl;

    // == operator
    if (c1 == c2)
        cout << "Equal hain";
    else
        cout << "Equal nahi hain";

    return 0;
}
