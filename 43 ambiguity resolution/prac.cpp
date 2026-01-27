#include <iostream>
using namespace std;
class A{
    int a;
    public:
        void speak(void){
            cout<<"Hindi"<<endl;
        }
};
class B{
    int a;
    public:
        void speak(void){
            cout<<"English"<<endl;
        }
};
class C : public A, public B{
    int a;
    public:
        void speak(void){
            B :: speak();
        }
};
int main() {
    C c;
    c.speak();
    
    return 0;
}