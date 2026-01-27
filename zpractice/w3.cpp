#include <iostream>
#include <string>
using namespace std;
class Myclass{
    public:
        void mymethod();
};
void Myclass :: mymethod(){
    cout<<"hello world";
}
int main() {
    Myclass myobj;
    myobj.mymethod();
    
    return 0;
}