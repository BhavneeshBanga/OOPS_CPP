#include <iostream>
using namespace std;
class Baseclass{
    public:
        int var_base = 1;
        virtual void display(){
            cout<<"1 Displaying base class variable var_base"<<var_base<<endl;
        }

};
class Derievedclass : public Baseclass{
    public:
        int var_derieved = 2;
        void display(){
            cout<<"2 Displaying derieved class variable var_derieved"<<var_derieved<<endl;
        }

};

int main() {
    Baseclass * base_class_pointer;
    Baseclass obj_base;
    Derievedclass obj_derieved;

    base_class_pointer = &obj_derieved;
    base_class_pointer->display();
    return 0;
}