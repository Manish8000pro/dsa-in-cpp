#include<iostream>
using namespace std;
int main()
{
    //Decimal to Binary

    // int num;
    // cout<<"Enter the number: ";
    // cin>>num;
    // int rem,ans=0,mul=1;
    
    // while(num>0)
    // {
    //     //remindr
    //     rem = num%2;

    //     //quotient
    //     num/=2;

    //     //ans
    //     ans+= rem*mul;

    //     //mul
    //     mul*=10;

    // }
    // cout<<ans<<endl;

    // BINARY TO DECIMAL

    int num; 
    cout<<"Enter the number: ";
    cin>>num;

    int ans=0,mul = 1,rem;

    while(num>0)
    {
        //rem
        rem = num%10;
        //quotent
        num = num/10;
        //ans
        ans = rem*mul+ans;
        //mul
        mul*=2;
    }
    cout<<ans<<endl;
}