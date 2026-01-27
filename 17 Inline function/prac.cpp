// #include <iostream>
// using namespace std;
// class shop{
//     public:
//         int price[100];
//         int id[100];
//         int counter;
//         void setdata(void);
//         void displaydata(void);
//         void intcounter(void ){ counter = 1;}
// };
// void shop :: setdata(void){
//     cout<<"enter the id of the item\n";
//     cin>>id[counter];
//     cout<<"Enter the price fo the item\n";
//     cin>>price[counter];
//     counter++;
// }
// void shop :: displaydata(void){
//     cout<<"The details of the item are\n";
//     for(int i = 1 ; i<counter ; i++){
//         cout<<"The price of the item whose id is "<<id[i]<<" is "<<price[i]<<endl;
//     }
// }
// int main() {
//     shop dukan;
//     dukan.intcounter();
//     dukan.setdata();
//     dukan.setdata();
//     dukan.setdata();
//     dukan.setdata();
//     dukan.setdata();
//     dukan.displaydata();

    
//     return 0;
// }

// #include <iostream>
// #include <cmath>
// using namespace std;
// inline int func(int x, int y)
// {
//     return sqrt(x*x + y*y);
// }
// int main()
// {
//     cout<<"The result of this statement is "<<func(8,7)<<endl;
//     cout<<"The result of this statement is "<<func(6,7)<<endl;
//     cout<<"The result of this statement is "<<func(8,5)<<endl;
//     cout<<"The result of this statement is "<<func(4,3)<<endl;
//     cout<<"The result of this statement is "<<func(1,2)<<endl;
//     cout<<"The result of this statement is "<<func(0,0)<<endl;
//     return 0;
// }


// #include <iostream>
// using namespace std;
// void counter(void)
// {
//     static int count = 0;
//     count++;
//     cout<<"The value of the count is "<<count<<endl;
// }
// int main()
// {
//     counter();
//     counter();
//     counter();
//     counter();
//     counter();
//     counter();
//     return 0;
// }


#include <iostream>
using namespace std;
class Student{
    public:
        static int count;
};

int Student::count = 101;

int main() {
    cout<<"The value of the count is "<<Student::count<<endl;
    cout<<"The value of the count is "<<Student::count<<endl;
    return 0;
}