#include <iostream>
using namespace std;
// Base class
class Employee{
    public:
        int id;
        float salary;
        Employee(int inpid){
            id = inpid;
            salary = 34.10;
        }
        Employee(){}
};
// derieved class
// class {{derived_class_name }}: {{viisbility_mode}} {{base_class_name}}
// default visibiliyty mode  is private
// public  visibliltu mode : public members of the base class become public members of the derived class;
// private visibliltu mode  : public members of the base class become private members of the derived class;
// private members are never inherited 


class Programmer : public Employee{
    public:
        int language_code = 9;
        Programmer(int idd){
            id = idd;
        }
        void getdata(){
            cout<<id<<endl;
        }
};
int main() {
    Employee Harry(1), rohan(2);
    cout<<Harry.salary<<endl;
    cout<<rohan.salary<<endl;
    Programmer skillf(1);
    cout<<skillf.language_code<<endl;
    skillf.getdata();
    
    
    return 0;
}