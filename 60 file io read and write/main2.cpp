#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // connecting our file with hout stream
    // ofstream hout("sample.txt");

    // // creating a name string and filling it with string entered by the user
    // cout<<"Enter your name";
    // string name;
    // cin>>name;

    // // writing a string to the files
    // hout<<name;
    
    // hout.close();


    ifstream hin("sample.txt");
    string content;
    hin>>content;
    cout<<"The contetn of this file is "<<content;
    hin.close();
    
    return 0;
}