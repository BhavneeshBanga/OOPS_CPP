#include <iostream>
using namespace std;
class Employee{
    private:
        int a;
        int b;
        int c;
    public:
        int d;
        int e;
        void setData(int a1, int b1, int c1);
        void getData(){
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
            cout<<"The value of c is "<<c<<endl;
            cout<<"The value of d is "<<d<<endl;
            cout<<"The value of e is "<<e<<endl;
        }
};

void Employee :: setData(int a1, int b1, int c1){
    a = a1;
    b = b1;
    c = c1;
}
int main() {
    Employee harry;
    // harry.a = 34; ----> this will throw error
    harry.d = 11;
    harry.e = 29;
    harry.setData(1, 2, 3);     //jab ham isko call lagate hai toh secretely harry ka address funciton ko de diya jaata hai, isi hidden pointer ko this kehte hain
    harry.getData();
    return 0;
}
