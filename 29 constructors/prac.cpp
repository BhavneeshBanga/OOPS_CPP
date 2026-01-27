#include <iostream>
using namespace std;
class Car{
    public:
        int a;
        int b;
        Car(void){
            cout<<"Hello this is called from an constructor 1!!"<<endl;
        }
        Car(int n){
            cout<<"Hello this is called from an constructor 2!!"<<endl;
        }
        Car(int n1, int n2){
            cout<<"Hello this is called from an constructor 3!!"<<endl;
        }
};
int main() {
    Car b;
    Car c(4);
    Car d(3, 4);
    
    return 0;
}