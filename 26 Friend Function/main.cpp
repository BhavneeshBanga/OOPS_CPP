#include <iostream>
using namespace std;
class complex{
    int a;
    int b;
    // friend complex SumComplex(complex o1, complex o2);
    public:
        void setData(int a1, int b2){
            a = a1;
            b = b2;
        }
        friend complex SumComplex(complex o1, complex o2);
        void printnumber(){
            cout<<"The number is "<<a <<" + "<<b<<" i "<<endl;
        }          
};
complex SumComplex(complex o1, complex o2){
    complex o3;
    o3.setData((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}
int main() {
    complex c1, c2, sum;
    c1.setData(1, 4);
    c1.printnumber();
    c2.setData(5, 8);
    c2.printnumber();
    sum = SumComplex(c1, c2);
    sum.printnumber();
}