#include <iostream>
using namespace std;
// syntax for inheriting in myltiple inheritance
// class derievedd: visibility-mode base1, visibility-mode base2{
//     class body of class derieved c
// } ;
class Base1{
    protected:
        int base1int;

    public:
        void set_base1int(int a)
        {
            base1int = a;
        }
};
class Base2
{
protected:
    int base2int;

public:
    void set_base2int(int b)
    {
        base2int = b;
    }
};
class derieved : public Base1, public Base2{
    public:
        void show()
        {
            cout<<"the value of base1 is "<<base1int<<endl;
            cout<<"the value of base2 is "<<base2int<<endl;
            cout<<"the sum  of base1 and base2 is "<<base1int + base2int<<endl;
        }
};
/*
the inherited derived class will look something like thid :
datamember:
    base1int = protected
    base2 int = protected 
member function
    setbase1ont = public
    setbase2ont = public
    show = public

*/

int main(){
    derieved harry;
    harry.set_base1int(99);
    harry.set_base2int(98);
    harry.show();
    return 0;
}