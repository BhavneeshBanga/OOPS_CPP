#include <iostream>
using namespace std;

class math{
    public:
        int a;
        int b;
        void setdata(int n1, int n2){
            a = n1;
            b = n2;
        }
        void print(void);
};

void math :: print(void){
    cout<<a<<" "<<b<<endl;  
}

int main() {
    math m1;
    m1.setdata(4, 5);
    m1.print();

    
    return 0;
}