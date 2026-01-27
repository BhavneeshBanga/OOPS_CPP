#include <iostream>
using namespace std;
float recieveMoney(int money, float factor = 1.04){
    return money * factor;
}

int main() {
    int money = 100000;
    cout<<"if you have "<<money<<" in your bank then yu eoll recieve "<<recieveMoney(money)<<"Rupees";
    return 0;
}


// constant argument
