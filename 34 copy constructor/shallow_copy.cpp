#include <iostream>
using namespace std;
class Student{
    public:
        string name;
        double* cgpaptr;

        Student(string name, double cgpa){
            this->name = name;
            cgpaptr = new double;
            *cgpaptr = cgpa;
        }
        Student(Student & obj){
            this->name = obj.name;
            this->cgpaptr = obj.cgpaptr;
        }
        void getInfor(){
            cout<<"name : " << name<<endl;
            cout<<"cgpa : " << *cgpaptr<<endl;
        }
};

int main() {
    Student s1("Bhavneesh", 9.6);
    Student s2(s1);

    
    s1.getInfor();
    *(s2.cgpaptr) = 9.8;
    s1.getInfor();


    // s2.getInfor();

    
    return 0;
}