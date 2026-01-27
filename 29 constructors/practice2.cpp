#include <iostream>
using namespace std;
class person{
    public:
        person(void);
};
person :: person(void){
    
   int age = 18;
   bool gender = 1;        //1 for male and 0 for female
   cout<<"constructor called";
        
}
int main() {
    person boy;
    return 0;
}