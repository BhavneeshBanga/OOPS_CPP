#include <iostream>
using namespace std;
class Employee{
        int id;
        int friends;
        string name;
    public:
        friend void triplex(void);
};
void triplex(void){
    cout<<"Hello this  is from a friend function!!"<<endl;
}
int main() {
    Employee bhavi;
    
    
    return 0;
}