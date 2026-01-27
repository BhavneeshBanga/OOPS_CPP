#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main() {
    string st;
    ifstream in;
    in.open("sample3.py");
    while(in.eof()==0){
        getline(in, st);
        cout<<st<<endl;
    }
    return 0;
}