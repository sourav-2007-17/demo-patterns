#include <iostream>
using namespace std;

class outer {
public:
    int outerval = 10;

    // Nested class
    class inner {
    public:
        int innerval = 20;

        void show() {
            cout << "Inner value: " << innerval << endl;
        }
    };

    void create() {
        inner obj;      // Outer class ke andar inner class ka object
        obj.show();
    }
};

int main() {
    outer o;

    // Outer class ka function call
    o.create();

    // Bahar se nested class ko access karna
    outer::inner innerobj;   // Scope resolution operator ::
    innerobj.show();

    return 0;
}
