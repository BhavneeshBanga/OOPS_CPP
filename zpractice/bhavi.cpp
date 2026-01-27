#include <iostream>
#include <string>
using namespace std;
class Myclass{
    public:
        int mynum;
        string mystring;
};
int main() {
    Myclass myobj;
    myobj.mynum = 15;
    myobj.mystring = "Some text\n";

    cout<<myobj.mynum<<endl;
    cout<<myobj.mystring<<endl;
    
    return 0;
}