#include <iostream>
using namespace std;
class boy{
    public:
        string name;
        int age;
        void setdata(void){
            cout<<"Enter the name of the student "<<endl;
            cin>>name;
            cout<<"Enter the age of the student "<<endl;
            cin>>age;
        }
        void getdata(void){
            cout<<"the name of the student is "<<name<< " and his age is "<<age<<endl;
        }

};
int main() {
    boy boys[5];
    for(int i = 0 ; i<5 ; i++){
        boys[i].setdata();
    }
    for(int j = 0 ; j<5 ; j++){
        boys[j].getdata();
    }

    return 0;
}