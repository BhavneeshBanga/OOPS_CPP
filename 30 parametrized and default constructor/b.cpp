#include <iostream>
using namespace std;
class point{
    int x,y;
    friend void distance(int a, int b);
    public:
        point(int a, int b){
            x = a;
            y = b;
        }
        void displaypoint(){
            cout<<"The point is ("<<x<<","<<y<<")"<<endl;
        }
};
// create a function which takes two point object and compute the distace between those ppoint
void distance(int a, int b){
    cout<<"Distance"<<a<<b<<endl;
}
int main() {
    point p(4, 5);
    p.displaypoint();

    point q(6, 8);
    q.displaypoint();

    distance(3,4);
    
    return 0;
}