/*
case1:
class b : public a{
order of execution of constructor
first a() then b()
};

case 2:
class A : public B, public C{
    order of executionn fo constructor -> B() then C() then A()
    
    };
    
    case 3:
    class A : public B , virtual public C{
        order of execurtio of constructor -> C() then B() and A()
        };
        
        */
#include <iostream>
using namespace std;
class Base1{
    int data1;
    public:
        Base1(int i){
            data1 = i;
            cout<<"Base1 class constructor called"<<endl;
        }
        void printdatabase1(void){
            cout<<"The value of data1 is "<<data1<<endl;
        }
};
        
class Base2{
    int data2;
    public:
        Base2(int i){
            data2 = i;
            cout<<"Base2 class constructor called"<<endl;
        }
        void printdatabase2(void){
            cout<<"The value of data2 is "<<data2<<endl;
        }
};
        
class Derieved : public Base1 , public Base2{
    int derieved1, derieved2;
    public:
        Derieved(int a, int b, int c, int d):  Base2(b), Base1(a){
            derieved1 = c;
            derieved2 = d;
            cout<<"Derieved class constructor called"<<endl;
        }
        void printdataderieved(void){
            cout<<"The value of derieved1 is "<<derieved1<<endl;
            cout<<"The value of derieved2 is "<<derieved2<<endl;
        }
} ;
int main() {
    Derieved harry(1, 2, 3, 4);
    harry.printdatabase1();
    harry.printdatabase2();
    harry.printdataderieved();
    return 0;
}