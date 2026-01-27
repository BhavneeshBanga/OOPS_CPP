#include <iostream>
using namespace std;
class shop{
    int itemId[100];
    int itemPrice[100];
    int counter;
    public:
        void intCounter(void) { counter = 1 ;}
        void SetPrice(void);
        void DisplayPrice(void);
};
void shop :: SetPrice(){
    cout<<"Enter id of your item number "<<counter<<endl;
    cin>>itemId[counter];
    cout<<"Enter price"<<endl;
    cin>>itemPrice[counter];
    counter++;
}
void shop :: DisplayPrice(){
    for( int i = 1 ; i< counter ; i++){
        cout<<"The price of item id "<<itemId[i]<< " is "<<itemPrice[i]<<endl;
    }
    cout<<endl;
}
int main() {
    shop dukan;
    dukan.intCounter();
    dukan.SetPrice();
    dukan.SetPrice();
    dukan.SetPrice();
    dukan.SetPrice();
    dukan.DisplayPrice();
    return 0;
}