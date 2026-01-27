#include <iostream>
using namespace std;
class shopitem{
    int id;
    float price;
    public:
        void setdata(int a, int b){
            id = a;
            price =b;
        }
        void getdata(){
            cout<<"code of this item is "<<id<<endl;
            cout<<"Price of this item is "<<price<<endl;
        }
};
int main() {
    int size = 3;
    // int *ptr = &size;
    // int *ptr = new int[34];

    // general store item
    // veggies item
    // hardware item
    shopitem *ptr = new shopitem[size];
    int p, i;
    float q;
    shopitem *ptrtemp = ptr; 
    for(int i = 0 ; i<size ; i++){
        cout<<"Enter Id and price of item "<<i+1<<endl;
        cin>>p>>q;
        ptr->setdata(p, q);
        ptr++;
    }
    for (int i = 0; i<size ; i++){
        cout<<"Item numver "<<i+1<<endl;
        ptrtemp->getdata();
        ptrtemp++;
    }

    return 0;
}