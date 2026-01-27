
// #include <iostream>
// using namespace std;
// class Employee{
//     private:
//         int a;
//         int b;
//         int c;
//     public:
//         void setdata(int a1, int b1);
//         void getdata(void){
//             cout<<"The value of the a is "<<a<<endl;
//             cout<<"The value of the a is "<<b<<endl;
//         }
// };
// void Employee::setdata(int a1, int b1){
//     a = a1;
//     b = b1;
// }
// int main() {
//     Employee vanshu;
//     vanshu.setdata(7,8);
//     vanshu.getdata();
    
//     return 0;
// }


#include <iostream>
using namespace std;
class girls{
    private:
        string name;
        int rollNo;
    public:
        girls(string name, int rollNo){
            this->rollNo = rollNo;
            this->name = name;
        }
        void greet(void){
            cout<<"Good morning "<<name<<" your roll Number is "<<rollNo<<endl;
        }
};
int main() {
    girls vanshika("Vanshika", 21);
    vanshika.greet();

    return 0;
}