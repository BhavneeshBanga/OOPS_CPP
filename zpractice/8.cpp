#include <iostream>
using namespace std;
class Student{
    string name;
    int rollno;
    int marks;
    public:
        Student(string name, int no, int marks){
            this->name = name;
            this->marks = marks;
            this->rollno = no;
        }
        void display(void){
            cout<<"Name "<<name<<endl;
            cout<<"rollno "<<rollno<<endl;
            cout<<"marks "<<marks<<endl;
        }
        ~Student(){}
};
int main() {
    {
        Student bhavi("Bhavneesh", 127, 99);
        bhavi.display();
    }
    return 0;
}