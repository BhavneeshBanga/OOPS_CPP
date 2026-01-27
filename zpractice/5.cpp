#include <iostream>
using namespace std;
class employee{
    string name;
    float slary;
    public:
        employee(string name, float salary){
            this->name  = name;
            this->slary = salary;
        }
        string getname(){
            return name;
        }
        float getsalary(){
            return slary;
        }
        void setname(string name){
            this->name = name;
        }
        void setsalary(float salary){
            this->slary = salary;
        }
        void displaydetail(){
            cout<<"Employee "<<name<<endl;
            cout<<"salary "<<slary<<endl;
        }
};

int main() {
    employee bhavi("Bhavneesh", 1000.00);
    cout<<bhavi.getname()<<endl;
    cout<<bhavi.getsalary()<<endl;
    bhavi.displaydetail();

    
    return 0;
}