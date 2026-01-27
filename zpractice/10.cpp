#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() { 
        cout << "Some sound\n";
    }
};

class Dog : public Animal {
public:
    void sound() {
         cout << "Bark!\n";
        }
};

int main() {
    Animal* dog = new Dog();
    dog->sound(); // "Bark!" (not "Some sound")
    delete dog;
}
