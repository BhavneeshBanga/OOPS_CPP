#include <iostream>
using namespace std;

int main() {
    //basic example 
    int a = 4;
    int* ptr = &a;


    cout<<"The value of a is "<<*(ptr);     //dereference operator matlab address se value nikalna


    //new operator 
    // float* p = new float(45.67);
    // cout<<"The value at address p is "<<*(p);



    // int *arr = new int[3];
    // arr[0] = 10;
    // arr[1] = 20;
    // arr[2] = 30;

    // cout<<"The vallue at arr[0] is "<<arr[0]<<endl;
    // cout<<"The vallue at arr[0] is "<<arr[1]<<endl;
    // cout<<"The vallue at arr[0] is "<<arr[2]<<endl;



    //delete operator
    int *arr = new int[3];
    arr[0] = 10;
    *(arr+1) = 20;
    arr[2] = 30;
    
    cout<<"The vallue at arr[0] is "<<arr[0]<<endl;
    cout<<"The vallue at arr[1] is "<<arr[1]<<endl;
    cout<<"The vallue at arr[2] is "<<arr[2]<<endl;
    
    delete [] arr;

        return 0;
}