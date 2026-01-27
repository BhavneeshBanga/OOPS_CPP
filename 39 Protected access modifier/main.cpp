#include <iostream>
using namespace std;


class Base{
    protected:      
        int a;
    private:
        int b;
};


/*
For a protected member
                  public derivation    private derivation      protected derivation

    1.private        not inherited          not inherited           not inherited
    2.protected         protedted             private               protected
    3.publlic           public                private               protected
*/

class Derieved : protected Base{

};

int main() {
    Base b;
    Derieved d;
    // cout<<d.a;  //will not work since a is protected in both base as well asd derived class


    return 0;
}