// #include <iostream>
// using namespace std;
// class Employee{
//     int id;
//     static int count;       //Static object ek hot hai aur use saare objects sahre karte hai
//     public:
//         void setData(void){
//             cout<<"Enter the Id: "<<endl;
//             cin>>id;
//             count++;
//         }
//         void getData(void){
//             cout<<"the id of the employee is "<<id<<" and this is employee number "<<count<<endl;
//         }
//         static void getCount(){
//             // cout<<id; this will throw an error
//             cout<<"The value of count is "<<count<<endl;
//         }
// };
// int Employee :: count=1000; //default value is 0
// int main() {
//     Employee harry, rohan, jerry;

//     harry.setData();
//     harry.getData();
//     Employee::getCount();
    
//     rohan.setData();
//     rohan.getData();
//     Employee::getCount();
    
//     jerry.setData();
//     jerry.getData();
//     Employee::getCount();
//     return 0;
// }

#include <iostream>
using namespace std;
class Employee{
    static int count;
    int id;
    public:
        void setData(void){
            cout<<"Enter the id";
            cin>>id;
            count++;
        }
        void getData(void){
            cout<<"The id of the  employee is "<<id<<" And htis ;is eamployee number "<<count<<endl;
        }

        static void getcount(void){
            // cout<<id<<endl;      //throws an error
            cout<<"The value of the count is "<<count<<endl;
        }
};

int Employee :: count;  //default value is zero

int main() {
    // count is the statid data member of this class
    Employee harry, rohan, lovish;
    harry.setData();
    harry.getData();

    Employee::getcount();
    
    rohan.setData();
    rohan.getData();
    Employee::getcount();
    
    lovish.setData();
    lovish.getData();
    Employee::getcount();


    return 0;
}