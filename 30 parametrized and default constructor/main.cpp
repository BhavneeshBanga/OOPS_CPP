#include <iostream>
using namespace std;

class complex{
    int a, b;
    public:
        complex(void);   //constructor declaration
        void printnumber(){
            cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
        }
};

complex :: complex(void){       //this is a default constructor as it takes no parameter
    a = 0; 
    b = 0;
    cout<<"hello world\n";
}

int main() {
    complex a;
    a.printnumber();   
    return 0;
}