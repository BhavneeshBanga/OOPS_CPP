// set data, set value, yeh sab na karna pade

#include <iostream>
using namespace std;

class complex{
    int a, b;
    public:
        // constructor is the same name as that of class .it si used to inititalize of its class ;
        // it is automatically invoked wheneer an object is created
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
    complex c1, c2, c3;
    c1.printnumber();
    c2.printnumber();
    c3.printnumber();
    
    return 0;
}

/*
    characterstics of constructors
    
    1. it should be declared in the public section of the class
    2. They are iautomatically whenever the object is created
    3. they cannot return values and cannot have return types 
    4. ti can have default arguments.
    5. we cannnot refer to their address 
    * Memory allocation happens whem constructor is called
    
*/