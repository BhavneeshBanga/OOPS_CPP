#include <iostream>
using namespace std;
class Gang{
    public:
        void ishealthy(){
            cout<<"Yes it is healty to eat"<<endl;
        }
        void isBania();
};
void Gang :: isBania(){
    cout<<"NO"<<endl;
}
int main() {
    Gang boy;
    boy.ishealthy();
    boy.isBania();
    return 0;
}