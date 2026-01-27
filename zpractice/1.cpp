#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream out("textfile.txt");
    out<<"Hello world this if first line which i dump into the textfile.txt"<<endl;
    out<<"thsi si second line\n";
    out<<"this one is third\n";
    out.close();
    cout<<"File written successfullly";

    return 0;
}