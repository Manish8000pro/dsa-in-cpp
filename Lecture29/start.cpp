#include<iostream>
using namespace std;

int main()
{
    int a = 20;
    int *ptr = &a;

    // Ptr is a pointer its point to integer type value

    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<ptr<<endl;
    cout<<&ptr<<endl;
}