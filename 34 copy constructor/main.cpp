#include <iostream>
using namespace std;
class number{
    int a;
    public:
        number(){
            a = 0;
        }
        number(int num){
            a = num;
        }
        // when no copy constructor found compiler supply its own copy constructor 
        number(number & obj){
            cout<<"Copy constructor called";
            a = obj.a;
        }
        void display(){
            cout<<"The number for this object is "<<a<<endl;
        }
};

int main() {
    number x, y, z(29), z2;
    x.display();
    y.display();
    z.display();
    number z1(z);   //copy constructor invoked
    z1.display();
    // z1 should exactly resemble with z


    z2 = z;   //copy constructor not called
    z2.display();
    
    
    number z3 = z;
    z3.display();
    
    return 0;
}