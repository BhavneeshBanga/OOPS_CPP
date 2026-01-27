#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    try {
        if (b == 0) {
            throw "Division by zero error!";  // Throwing an exception
        }
        cout << "Result: " << a / b << endl;
    }
    catch (const char* msg) {  // Catching the exception
        cout << "Exception caught: " << msg << endl;
    }

    cout << "Program continues smoothly..." << endl;
    return 0;
}
