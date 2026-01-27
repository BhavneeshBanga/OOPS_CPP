// #include <iostream>
// using namespace std;
// void function(int a = 0, int b = 0 , int c = 0){
//     cout<<"the value of a is "<<a<<endl; 
//     cout<<"the value of b is "<<b<<endl; 
//     cout<<"the value of c is "<<c<<endl; 
// }

// int main() {
//     function();
//     function(3);
//     function(3, 4);
//     function(3, 4, 5);
    
//     return 0;
// }

// #include <iostream>
// using namespace std;
// void interest(int n, float p = 1.03){
//     cout<<"The amount you wil get is "<<n*p;
// }

// int main() {
//     interest(10000);
    
//     return 0;
// }

// #include <iostream>
// using namespace std;
// inline int square_root(int n){
//     return n*n;
// }

// int main() {
//     cout<<square_root(8);
//     cout<<square_root(7);
//     cout<<square_root(6);
//     cout<<square_root(5);
//     cout<<square_root(4);
    
//     return 0;
// }

// #include <iostream>
// using namespace std;
// class student{
//     public:
//         static int count;

//         student(){ count++; }

//         void getcount(){
//             cout<<"The coutn of student is "<<count<<endl;
//         }
// };

// int student :: count = 0;

// int main() {
//     student bhavneesh;
//     student vanshika; 
//     student vanshika2; 
//     vanshika.getcount();
//     student vanshika3; 
//     student bhavi; 
//     student arun; 
//     vanshika.getcount();
    
    
//     return 0;
// }


#include <iostream>
using namespace std;
class employee{
    string name;
    string color;
    int  id;
    public:
        void getdetails(){
            cout<<"Enter the name "<<endl;
            cin>>name;
            cout<<"Enter the id "<<endl;
            cin>>id;
        }
        void clothes(string s){
            this->color = s;
        }
        void display(){
            clothes("White");
            cout<<"The details are "<<name<<endl;
            cout<<"The details are "<<id<<endl;
            cout<<"The details are "<<color<<endl;
        }
};
int main() {
    employee amit;
    amit.getdetails();
    amit.display();
    return 0;
}