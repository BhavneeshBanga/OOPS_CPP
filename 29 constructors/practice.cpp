#include <iostream>
using namespace std;
class book{
    private:
        string name;
        int price;
        int nop;
    public:
        book(void);
        void setname(string name){
            name = name;
        }
        void setnop(int  pages){
            nop = pages;
        }
        void setprice(int  price){
            nop = price;
        }
        void display(){
            cout<<"The name of the book is "<<name<<endl;
            cout<<"The price of the book is "<<price<<endl;
            cout<<"The number of pages  of the book is "<<nop<<endl;
        }
    };

book :: book(void){
    name = "HarryPorter";
    price = 450;
    nop = 500;
}

int main() {
    book book1;
    book1.display();
    return 0;
}