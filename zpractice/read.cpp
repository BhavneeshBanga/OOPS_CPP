// #include <iostream>
// #include <fstream>
// #include <string>
// using namespace std;

// int main() {
//     ifstream in("textfile.txt");
//     string line;
//     while(getline(in, line)){
//         out<<line<<endl;
//     }
//     in.close();
    
    
//     return 0;
// }



#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    // ofstream out("bhavibanga.py");
    // out<<"a = 9\n";
    // out<<"b = 10\n";
    // out<<"print(a+b)\n";

    // out.close();
    // cout<<"File written successfully";

    ifstream in("bhavibanga.py");
    string line;
    while(getline(in, line)){
        cout<<line<<endl;
    }

    return 0;
}







