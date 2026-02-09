#include<iostream>
using namespace std;

int main()
{
    int a = 20;
    int *ptr = &a;

    // Ptr is a pointer its point to integer type value

    cout<<a<<endl;
    // value of a
    cout<<&a<<endl;
    // Address of a
    cout<<ptr<<endl;
    // Address of a
    cout<<&ptr<<endl;
}