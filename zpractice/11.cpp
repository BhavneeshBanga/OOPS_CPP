#include <iostream>
using namespace std;

int main() {
    int balance = 1000;
    int withdraw = 1001;

    try {
        if (withdraw > balance)
            throw "Insufficient Balance!";
        cout << "Withdraw successful\n";
    }
    catch (const char* msg) {
        cout << "Error: " << msg << endl;
    }
}
