#include <iostream>
using namespace std;
class binary{
    string s;
    public:
        void read(void);
        void check_binary(void);
        void ones_compliment(void);
        void display(void);
};
void binary :: read(void){
    cout<<"Enter a binary number : "<<endl;
    cin>>s;
}
void binary :: check_binary(void){
    for (int i = 0; i < s.size() ; i++)
    {
        if(s.at(i)!='0' && s.at(i)!='1' ){
            cout<<"Invalid binary format";
            exit(0);
        }
    }
}
void binary :: ones_compliment(void){
    for (int i = 0; i < s.size() ; i++)
    {
        if(s.at(i)=='0'){
            s.at(i) = '1';
        }
        else {
            s.at(i) = '0';
        }
        cout<<endl;
    }
}
void binary :: display(void){
    check_binary();
    cout<<"Displaying your number";
    for (int i = 0; i < s.size() ; i++){
        cout<<s.at(i);
    }
    cout<<endl;
}

int main() {
    binary b;
    b.read();
    // b.check_binary();
    b.display();
    b.ones_compliment();
    b.display();    
    return 0;
}