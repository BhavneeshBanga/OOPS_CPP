#include <iostream>
using namespace std;
class Animal{
    public:
        virtual void speak(void){
            cout<<"Animal speaking\n";
        }
};
class dog : public Animal{
    public:
        void speak(void) override{
            cout<<"Dog barking\n";
        }
};
class cat : public Animal{
    public:
        void speak(void) override{
            cout<<"cat meowing\n";
        }
};
int main() {
    Animal* a;
    dog d;
    a = &d;
    a->speak();
    
    return 0;
}