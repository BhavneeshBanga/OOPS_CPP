// passing parameter in base class constructor"
#include <iostream>
using namespace std;

class Base {
    int a;
    public:
        Base(int x) {
            a = x;
            cout << "Base class constructor called with value: " << a << endl;
        }
};

class Derived : public Base {
    int b;
    public:
        Derived(int x, int y) : Base(x) {  // ← Base constructor called here
            b = y;
            cout << "Derived class constructor called with value: " << b << endl;
        }
};

int main() {
    Derived obj(10, 20);

    return 0;
}
