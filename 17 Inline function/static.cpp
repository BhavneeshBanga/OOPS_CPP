#include <iostream>
using namespace std;
inline int product(int a, int b){
    static int c = 0;   //this execues only once
    c += 1;
    return a*b+c;
}
int main() {
    int a, b;
    cout<<"Enter the valuse of a and b"<<endl;
    cin>>a>>b;
    cout<<"the valuse of a product b is "<<product(a, b)<<endl;
    cout<<"the valuse of a product b is "<<product(a, b)<<endl;
    cout<<"the valuse of a product b is "<<product(a, b)<<endl;
    cout<<"the valuse of a product b is "<<product(a, b)<<endl;
    cout<<"the valuse of a product b is "<<product(a, b)<<endl;
    cout<<"the valuse of a product b is "<<product(a, b)<<endl;
    cout<<"the valuse of a product b is "<<product(a, b)<<endl;
    cout<<"the valuse of a product b is "<<product(a, b)<<endl;
    cout<<"the valuse of a product b is "<<product(a, b)<<endl;
    cout<<"the valuse of a product b is "<<product(a, b)<<endl;
    cout<<"the valuse of a product b is "<<product(a, b)<<endl;
    cout<<"the valuse of a product b is "<<product(a, b)<<endl;
    cout<<"the valuse of a product b is "<<product(a, b)<<endl;
    cout<<"the valuse of a product b is "<<product(a, b)<<endl;
    cout<<"the valuse of a product b is "<<product(a, b)<<endl;
    cout<<"the valuse of a product b is "<<product(a, b)<<endl;
    cout<<"the valuse of a product b is "<<product(a, b)<<endl;
}