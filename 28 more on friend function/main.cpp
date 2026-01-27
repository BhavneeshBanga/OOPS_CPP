#include <iostream>
using namespace std;
class Y;            //agar yeh nahi dala toh error aayehga    forward declaration karna hi hoga

class X{
    int data;
    public:
        void setvalue(int value){
            data = value;
        }
    friend void add(X , Y);
};

class Y{
    int num;
    public:
    void setvalue(int value){
        num = value;
    }
    friend void add(X , Y);

};

void add(X o1, Y o2){
    cout<<"Summing datas of x and y objects gives me "<<o1.data + o2.num;
}

int main() {
    X a;
    a.setvalue(3);
    Y b;
    b.setvalue(5);

    add(a, b);
    
    return 0;
}