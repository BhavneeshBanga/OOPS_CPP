#include <iostream>
using namespace std;
/*
Syntax for initialization list in constructor
constructor (argument-list) : initilization-secton
{
    assignment + other code;
}
class Test{
    int a;
    int b;
    public:
        Test(int i , int j) : a(i), b(j){
        constructor body}
}

*/

class Test
{
    int a;
    int b;

public:
    // Test(int i, int j) : a(i), b(j){
    // Test(int i, int j) : a(i), b(i+j){
    // Test(int i, int j) : a(i), b(2*j){
    // Test(int i, int j) : a(i), b(a + j){
    // Test(int i, int j) : b(j), a(i+b){      //--->this will create problem because a will be initialize first

    Test(int i, int j) : a(i)
    {
        b = j;
        cout << "Constructor executed" << endl;
        cout << "The valusof a is " << a << endl;
        cout << "The valusof b is " << b << endl;
    }
};

int main()
{
    Test t(1, 2);

    return 0;
}