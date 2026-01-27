#include <iostream>
using namespace std;
class employee{
    public:
        int age;
        void setage(int age){
            cout<<"Enter the age of the person\n";
            cin>>age;
        }
        void printaage(void){
            cout<<"Age of employee is \n";
            cout<<age<<endl;
        }
};
int main() {
    employee boy[5];
    for(int i = 0 ; i<5; i++){
        boy[i].setage(i);
    }
    for(int j = 0 ; j<5; j++){
        boy[j].printaage();
    }
    
    return 0;
}