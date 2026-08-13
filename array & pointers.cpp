#include <iostream>
using namespace std;

// Object pointer ke liye class
class demo {
public:
    void show() {
        cout << "Hello!" << endl;
    }
};

int main() {

    // =========================
    // 1. Array
    // =========================
    // Array = same type ke elements ka collection

    int marks[5] = {85, 90, 78, 92, 88};

    cout << "Marks: ";

    for (int i = 0; i < 5; i++) {
        cout << marks[i] << " ";
    }

    cout << endl;


    // =========================
    // 2. Pointer
    // =========================
    // Pointer = memory address store karta hai

    int x = 42;

    int *ptr = &x;      // ptr mein x ka address hai

    cout << "Address of x: " << ptr << endl;
    cout << "Value of x: " << *ptr << endl;   // 42

    *ptr = 100;         // x ki value change ho jayegi

    cout << "New value of x: " << x << endl;


    // =========================
    // 3. Array and Pointer
    // =========================

    int arr[3] = {10, 20, 30};

    int *p = arr;       // arr ka address p mein store

    cout << "First element: " << *p << endl;       // 10
    cout << "Second element: " << *(p + 1) << endl; // 20
    cout << "Third element: " << *(p + 2) << endl;  // 30


    // =========================
    // 4. Object Pointer
    // =========================

    demo d;

    demo *dptr = &d;    // d ka address dptr mein

    dptr->show();       // Object pointer ke liye -> operator

    return 0;
}
