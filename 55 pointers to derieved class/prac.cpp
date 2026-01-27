#include <iostream>
using namespace std;
class  BaseClass{
    public:
        int base_var;
        void display(){
            cout<<"Displying base class variable"<<base_var<<endl;
        }
    
};
class  derivedclass : public BaseClass{
    public:
        int derived_var;
        void display(){
            cout<<"Displying base class variable"<<base_var<<endl;
            cout<<"Displaying derived class variavle "<<derived_var<<endl;
        }
};
    
    
    

int main() {
    derivedclass * derived_class_ptr;
    derivedclass obj;
    derived_class_ptr = & obj;
    derived_class_ptr->display();
    

    return 0;
}