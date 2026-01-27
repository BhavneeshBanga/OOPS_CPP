#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    // string st  = "Hello my youtube subscribers are above 1cr";
    // ofstream out("Hello_subs.txt");
    // out<<st;
    string st;
    ifstream in("sample2.txt");
    in>>st;
    getline(in, st);
    cout<<st;
    
    return 0;
}