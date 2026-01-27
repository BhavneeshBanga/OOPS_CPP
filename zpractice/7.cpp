#include <iostream>
using namespace std;
class student{
    public:
        string name;
        int age;

        void display(){
            cout<<"Name "<<name<<" age "<<age<<endl;
        }
};
int main() {
    student * s = new student;
    s->name = "Bhavneesh";
    s->age = 12;
    s->display();

    delete s;
    return 0;
}