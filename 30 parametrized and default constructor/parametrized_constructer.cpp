#include <iostream>
using namespace std;

class complex{
    int a, b;
    public:
        complex(int, int);   //constructor declaration
        void printnumber(){
            cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
        }
};

complex :: complex(int x, int y){       //this is a parametrized constructor as it accepts 2 parameter
    a = x; 
    b = y;
    cout<<"hello world\n";
}


int main() {
    // implict call
    // complex a(8,9);

    //explict call
    complex b = complex(5, 7);


    b.printnumber();
    
    return 0;
}