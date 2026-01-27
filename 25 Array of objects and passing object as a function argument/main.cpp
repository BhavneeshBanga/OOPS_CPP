#include <iostream>
using namespace std;
class complex{
    int a;
    int b;
    public:
        void SetData(int v1, int v2){
            a = v1;
            b = v2;
        }
        void SetDatabySum(complex o1, complex o2){
            a = o1.a + o2.a;
            b = o1.b + o2.b;
        }
        void PrintData(){
            cout<<"your complex number is "<<a<<" + "<<b<<"i"<<endl;
        }
};
int main() {
    complex c1, c2, c3;
    c1.SetData(1, 2);
    c1.PrintData();

    c2.SetData(3, 4);
    c2.PrintData();

    c3.SetDatabySum(c1, c2);
    c3.PrintData();
    
}