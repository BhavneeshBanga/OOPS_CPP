#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 0;

    try {
        if (b == 0)
            throw "Cannot divide by zero";   // throwing exception

        cout << a / b;
    }
    catch (const char* msg) {
        cout << "Error: " << msg << endl;    // handling exception
    }

    cout << "Program continues normally...";
    return 0;
}
