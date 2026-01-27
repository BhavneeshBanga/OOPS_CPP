#include <iostream>
using namespace std;

int main() {
    while(true){
        int a, b;
        cin >> a >> b;
        try {
            if(a=='q') break;
            if (b == 0) {
                throw "Division by zero not allowed!";
            }
            cout << "Result = " << a / b;
        }
        catch (const char* msg) {
            cout << "Error: " << msg<<endl;;
        }
    }
    return 0;
}