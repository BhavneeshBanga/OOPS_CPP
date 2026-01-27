#include <iostream>
using namespace std;
class complex{
     int a;
        int b;
    public:
        void setdata(int a1, int b1){
            a = a1;
            b = b1;
        }
        friend complex complexfunction(complex o1, complex o2);
        void printNumber(void){
            cout<<"the number is "<<a<<" + "<<b<<"i"<<endl;
        }
};
complex complexfunction(complex o1, complex o2 ){
    complex o3;
    o3.setdata((o1.a + o2.a), (o1.b+ o2.b));
    return o3;
}

int main() {
    complex c1, c2, ans;
    c1.setdata(4, 3);
    c1.printNumber();
    c2.setdata(3, 4);
    c2.printNumber();
    ans = complexfunction(c1, c2);
    ans.printNumber();
}