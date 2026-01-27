#include <iostream>
using namespace std;

class complex;

class Calculator{
    public:
        int add(int a, int b){
            return a+b;
        }
        int sumRealComplex(complex, complex);
        int compRealComplex(complex, complex);
};
class complex{
    int a;
    int b;
    public:
        void setNumber(int a1, int b1){
            a = a1;
            b = b1;
        }

        friend class Calculator;
        
        void printNumber(void){
            cout<<"numbers are "<<a<<" + i"<<b<<endl;
        }
};


int Calculator :: sumRealComplex(complex o1, complex o2){
    return (o1.a + o2.a);
}
int Calculator :: compRealComplex(complex o1, complex o2){
    return (o1.b + o2.b);
}

int main() {
    complex c1, c2;
    c1.setNumber(2, 3);
    c2.setNumber(22, 33);

    c1.printNumber();
    c2.printNumber();

    Calculator c;

    int ans = c.sumRealComplex(c1, c2);
    cout<<ans<<endl;

    int result = c.compRealComplex(c1, c2);
    cout<<result<<endl;
 
    return 0;
}