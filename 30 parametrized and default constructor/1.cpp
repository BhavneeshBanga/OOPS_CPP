#include <iostream>
using namespace std;
class person{
    private:
        int a;
        int b;
    public:
        person(void){
            a = 0;
            b = 0;
            cout<<"Constructor called!!"<<endl;
            cout<<a<<endl<<b<<endl;
        }
};
int main() {
    person p;

    return 0;
}