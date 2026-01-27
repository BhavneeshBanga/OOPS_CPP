#include <iostream>
using namespace std;
class animal{
    public:
        virtual void speak(void){
            cout<<"Animal is making sound!!"<<endl;
        }
};
class dog : public animal{
    public:
        void speak(void){
            cout<<"Dog is barking!!"<<endl;
        }
};
class cat : public animal{
    public:
        void speak(void){
            cout<<"cat is meowing!!"<<endl;
        }
};
int main() {
    animal* a;
    dog d;
    cat c;
    a = &c;
    a->speak();

    
    return 0;
}