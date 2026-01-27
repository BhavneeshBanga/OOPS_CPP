#include <iostream>
#include <fstream>
#include <string>
using namespace std;
/*
the useful classes for working with files in c++ are:
    1. fstreambas
    2. ifstream --> derieve3d from fsrreambase
    3. ofstream --> derieve3d from fsrreambase
*/
// in order to work with files in c++, you wil have to upen it, there are 2 ways to open a file , 
// 1.using the constructor
// 2.usnign the member fundciton open() of the class


int main() {
    // string st = "a=3\nb=4\nc=9\n\nprint(a+b+c)\nprint(f'Hello my beautiful viewers{c} times')";
    // //opening files using constructor and writing it
    // ofstream out("beautiful.py");
    // out<<st;


    string st2;

    ifstream in("sample2.txt");
    in>>st2;
    getline(in, st2);
    // // getline(in, st2);
    cout<<st2;
    return 0;
}