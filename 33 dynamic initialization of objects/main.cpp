#include <iostream>
using namespace std;

class bankdeposit{
    int principal;
    int years;
    float interestrate;
    float returnvalue;

    public: 
        // bankdeposit(){}
        bankdeposit(int p, int y, float r);         //r can be a valur lieke 0.04
        bankdeposit(int p, int y, int r);         //r can be a valur lieke 14
        void show();

};

bankdeposit :: bankdeposit(int p, int y , float r){
    principal = p;
    years = y;
    interestrate = r;

    returnvalue = principal;
    for(int i = 0 ; i <y ; i++){
        returnvalue *= (1+interestrate);
    }
}

bankdeposit :: bankdeposit(int p, int y , int r){
    principal = p;
    years = y;
    interestrate = float(r)/100;

    returnvalue = principal;
    for(int i = 0 ; i <y ; i++){
        returnvalue *= (1+interestrate);
    }
}


void bankdeposit :: show(){
    cout<<endl<<"principal  amount was "<<principal<<"return value after " <<years
    <<" is  "<<returnvalue<<endl;
}
int main() {
    // bankdeposit bd1, bd2, bd3;
    int p, y ;
    float r;
    int R;


    cout<<"Enter the value of p y and r "<<endl;
    cin>>p>>y>>r;
    bankdeposit bd1 = bankdeposit(p,y, r);              //it is like a data type like   int a = 45;
    bd1.show();

    // cout<<"Enter the value of p y and R "<<endl;
    // cin>>p>>y>>R;
    // bd1 = bankdeposit(p,y, R);
    // bd1.show();

    
    return 0;
}