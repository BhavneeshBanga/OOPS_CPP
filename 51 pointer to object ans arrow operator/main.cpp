#include <iostream>
using namespace std;
class complex{
    int real, imaginary;
    public:
        void getdata(){
            cout<<"The real part is "<<real<<endl;
            cout<<"The imaginary part is "<<imaginary<<endl;
        }
        void setdata(int a, int b){
            real = a;
            imaginary = b;
        }
};

int main() {
    complex c1;
    // complex* ptr = &c1;
    complex* ptr = new complex;
    
    // (*ptr).setdata(1, 2);
    //is exactly same as 
    ptr->setdata(1, 2);
    // (*ptr).getdata();
    ptr->getdata();



    //array of objects
    // complex* ptr1 = new complex[4];
    
    // // (*ptr).setdata(1, 2);
    // //is exactly same as 
    // ptr1->setdata(1, 2);
    // // (*ptr).getdata();
    // ptr1->getdata();
    
    // return 0;
}