#include <iostream>
using namespace std;

class point {
public:
    int x, y;

    // Constructor
    point(int a, int b) : x(a), y(b) {}

    void show() {
        cout << "(" << x << "," << y << ")" << endl;
    }
};

// Object pass by value
// Isme object ki copy banti hai
void printpoint(point p) {
    p.show();
    // Original object change nahi hoga
}

// Object pass by reference
// Original object directly modify hota hai
void movepoint(point &p, int dx, int dy) {
    p.x += dx;
    p.y += dy;
}

// Object return karna
point midpoint(point p1, point p2) {
    return point((p1.x + p2.x) / 2,
                 (p1.y + p2.y) / 2);
}

int main() {

    point a(2, 4), b(6, 8);

    // Object assignment
    // Member-by-member copy hoti hai
    point c = a;

    cout << "Copied object c: ";
    c.show();

    // Pass by value
    cout << "Pass by value: ";
    printpoint(a);

    // Pass by reference
    movepoint(a, 3, 3);

    cout << "After moving a: ";
    a.show();       // (5,7)

    // Object return karna
    point mid = midpoint(a, b);

    cout << "Midpoint: ";
    mid.show();

    return 0;
}
