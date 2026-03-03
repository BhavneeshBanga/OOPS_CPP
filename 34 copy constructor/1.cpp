#include <iostream>
using namespace std;
class Complex{
    private:
        int a;
        int b;
    public:
        Complex(void){
            a = 0;
            cout<<"Default constructor called"<<endl;
        }
        Complex(int num){
            a = num;
            cout<<"simple constructor called!!"<<endl;
        }
        Complex(Complex & obj){     //pass by reference
            // this->a = obj.a;        //shalllow copy ban rahi hai
            // a = obj.a;   
            cout<<"Copy constructor called!!"<<endl;
        }
        void display(void){
            cout<<"The number for this object is "<<a<<endl;
        }
};
int main() {
    // Complex c1;
    // c1.display();

    // Complex c2;
    // c2.display();

    Complex c3(8);
    c3.display();

    Complex c4(c3);
    c4.display();

    return 0;
}