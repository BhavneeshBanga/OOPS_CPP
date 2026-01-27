#include <iostream>
using namespace std;
class Employee{
    int id;
    int salary;
    public:
        void setId(void){
            salary = 100;
            cout<<"Enter the id of the employee "<<endl;
            cin>>id;
        }
        void getId(void){
            cout<<"The id of employee is "<<id<<endl;
        }
};
int main() {
    // Employee Bhavi, arpit, bhavay, aryan;
    // Bhavi.setId();
    // Bhavi.getId();
    //lekin agar employee ka number badh jayta hai 2000-3000 tab kya aise bnayenge --> no
    Employee fb[4];
    for (int  i = 0; i < 4 ; i++)
    {
       fb[i].setId();
    //    fb[i].getId();
    }
    for (int  i = 0; i < 4 ; i++)
    {
    //    fb[i].setId();
       fb[i].getId();
    }
}