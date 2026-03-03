// Har non-static member function ke andar automatically available hota hai.
#include <iostream>
using namespace std;
class A{
    int a;
    public:
        void setData(int a){
        // A & setData(int a){
            // a = a;    //yeh error yah=ni k garbage value deta hai  (implicit this pointer)
            this->a = a;
            // return *this;
        }
        void getdata(){
            cout<<"The value of a is "<<a<<endl;
        }
};

int main() {
    // this is a keyword which is a pointer which point to the object which invokes the member function

    A a;
    a.setData(4);
    a.getdata();
    return 0;
}