// #include <iostream>
// using namespace std;

// // Abstract class (because it has a pure virtual function)
// class Shape {
// public:
//     virtual void area() = 0;   // Pure virtual function
// };

// class Circle : public Shape {
// public:
//     void area() {
//         cout << "Area of Circle" << endl;
//     }
// };

// class Rectangle : public Shape {
// public:
//     void area() {
//         cout << "Area of Rectangle" << endl;
//     }
// };

// int main() {
//     // Shape s;  // ERROR: Cannot create object of abstract class

//     Circle c;
//     Rectangle r;

//     c.area();
//     r.area();
// }

#include <iostream>
using namespace std;

// Abstract class (because it has a pure virtual function)
class animal {
public:
    virtual void sound() = 0;   // Pure virtual function
};

class lion : public animal {
public:
    void sound() {
        cout << "roar" << endl;
    }
};

class dog : public animal {
public:
    void sound() {
        cout << "bark" << endl;
    }
};

int main() {
    // Shape s;  // ERROR: Cannot create object of abstract class

    lion l;
    dog d;

    l.sound();
    d.sound();
}
