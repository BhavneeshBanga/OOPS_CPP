#include <iostream>
using namespace std;
class Baseclass{
    public:
        int var_base;
        void display(){
            cout<<"Displaying base class variable var_base"<<var_base<<endl;
        }

};
class Derievedclass : public Baseclass{
    public:
        int var_derieved;
        void display(){
            cout<<"Displaying derieved class variable var_derieved"<<var_derieved<<endl;
        }

};

int main() {
    Baseclass * base_class_pointer;
    Baseclass obj_base;
    Derievedclass obj_derieved;
    base_class_pointer = &obj_derieved; //pointing base class pointer to derieved class
    base_class_pointer->var_base = 34;
    // base_class_pointer->var_derieved = 134;    //will throw error
    base_class_pointer->display();
    Derievedclass * Derievedclass_pointer;
    Derievedclass_pointer = &obj_derieved;
    Derievedclass_pointer->var_derieved = 98;
    Derievedclass_pointer->display();
    
    return 0;
}