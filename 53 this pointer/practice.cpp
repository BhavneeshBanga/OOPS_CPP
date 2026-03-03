#include<iostream>
using namespace std;


class A{
    int x;
public:
    void show(){
        cout << this <<endl;
    }
};

int main(){
    A a1;
    A a2;
    a1.show();
    a2.show();
}