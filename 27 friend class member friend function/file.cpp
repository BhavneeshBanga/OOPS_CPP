#include <iostream>
using namespace std;
class complex;
class calculator{
    public:
        int a;
        int b;
        void setnumber(int a, int b){
            this->a = a;
            this->b = b;
        }
        void printnumber(){
            cout<<"The numbers are "<<a<<" and "<<b;
        }
};
class complex{
    public:
        friend class calculator;

};

int main() {
    calculator a;
    a.setnumber(1, 7);
    a.printnumber();
    return 0;
}