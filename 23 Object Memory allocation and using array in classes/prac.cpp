#include <iostream>
using namespace std;
class dukan{
    public:
        int itemid[100];
        int itemprice[100];
        int counter;

        void intcounter(void) {
            counter = 1;
        };

        void setprice(void);
        void getprice(void);
};
void dukan::setprice(void){
    cout<<"enter the id of the item number "<<counter<<endl;
    cin>>itemid[counter];
    cout<<"enter the price of the item number "<<counter<<endl;
    cin>>itemprice[counter];
    counter++;
}
void dukan::getprice(void){
    for(int i = 0 ; i<counter ; i++){
        cout<<" Id "<<itemid[i]<<" price "<<itemprice[i]<<endl;
    }
}
int main() {
    dukan shop;
    shop.intcounter();
    shop.setprice();
    shop.setprice();
    shop.setprice();
    shop.setprice();
    shop.getprice();
    
    return 0;
}