#include <iostream>
using namespace std;

class Human {
    string name;
    int age;

public:
    // Default constructor
    Human() {
        name = "Unknown";
        age = 0;
        cout << "Default Constructor Called!\n";
    }

    // Parameterized constructor
    Human(string n, int a) {
        name = n;
        age = a;
        cout << "Parameterized Constructor Called!\n";
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Human h1;              // Default Constructor
    Human h2("Bhavneesh", 20); // Parameterized Constructor
    
    h1.display();
    h2.display();
    return 0;
}
