#include <iostream>
using namespace std;
class Base1{
    public:
        void greet(){
            cout<<"How are you?"<<endl;
        }  
};
class Base2{
     public:
        void greet(){
            cout<<"Kaise ho?"<<endl;
        }
};
class derievved : public Base1, public Base2{
    int a;
    public:
        void greet(){
            Base2::greet();
        }
};
class B{
    public:
        void say(){
            cout<<"Hello world";
        }
};
class D : public B{
    int a;
    //D's new say() method will override base class's say ()method 
    public:
        void say(){
            cout<<"Hello my beautiful people";
        }
};
int main() {
    // ambiguity 1
    // Base1 base1obj;
    // Base2 base2obj;
    // base2obj.greet();
    // derievved d;
    // d.greet();


    // ambiguity 2

    D d;
    d.say();
    return 0;
}