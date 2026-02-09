#include<iostream>
using namespace std;

int main()
{
    // int a = 20;
    // int *ptr = &a;

    // // Ptr is a pointer its point to integer type value

    // cout<<a<<endl;
    // // value of a
    // cout<<&a<<endl;
    // // Address of a
    // cout<<ptr<<endl;
    // // Address of a
    // cout<<&ptr<<endl;
    // // Address of Ptr


    int arr[5] = {1,2,5,8,10};
    for(int i=0;i<5;i++){
        cout<<arr+i<<endl;
    }

    // Print the value 
    for(int i=0;i<5;i++){
        cout<<*(arr+i)<<endl;
    }

    int *p = arr;
    for(int i=0;i<5;i++){
        cout<<p[i] <<endl;
    }

    return 0;
}