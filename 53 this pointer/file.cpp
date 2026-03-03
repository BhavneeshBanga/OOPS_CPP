#include <iostream>
using namespace std;
class boy{
    public:
        int age;
        
        void setAge(int age){
            this->age = age;
        }

        void printAge(){
            cout<<"Age is "<<this->age<<endl;
        }
};
int main() {
    boy b;
    b.setAge(18);
    b.printAge();

    
    return 0;
}


// this pointer sirf tab exist karta hai jab:

//👉 Non-static member function call hota hai.