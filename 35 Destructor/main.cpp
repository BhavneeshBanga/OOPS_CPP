#include <iostream>
using namespace std;
int count = 0;
// destructor never takes an aargument nor it retyrn any value
class num{
    public:
        num(){
            count++;
            cout<<"This is the time when constructor called for object number "<<count<<endl;
        }
        ~num(){
            cout<<"This is the time when my destructor is called for object number "<<count<<endl;
            count--;
        }
};

int main() {
    cout<<"we are inside our main funciotnn "<<endl;
    cout<<"creating first object n1 "<<endl;
    num n1;
    {
        cout<<"Entering this block"<<endl;
        cout<<"creating two more objects "<<endl;
        num n2, n3;
        cout<<"Exiting thsi block"<<endl;
    }
    cout<<"Back to main"<<endl;
    
    return 0;
}