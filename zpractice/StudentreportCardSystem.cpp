#include <iostream>
using namespace std;
class Person{
    string name;
    int age;
    public: 
        Person(string s, int a) : name(s), age(a){}
        virtual void display(){
            cout<<"The name of the person is "<<name<<endl<<"And the age is "<<age<<endl;
        }
        ~Person() { }

};
class Student : public Person{
    int rollNo;
    public:
        void display() override{
            Person :: display();
            cout<<"And the roll number is "<<rollNo<<endl;
        }

};
class TopperStudent : public Student{

};
int main() {
    Person vanshu("Vanshika", 18);
    vanshu.display();
    
    return 0;
}