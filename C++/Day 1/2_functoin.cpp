#include<iostream>
using namespace std;

bool Prime(int n)
{
    if(n<2)
    return 0;

    for(int i=2;i<=n;i++)
    {
        if(n%2==0)
        return 0;
    }
    return 1;
}

 int fact(int n =3) //Default Parameter

{
    int ans = 1;
    for(int i=1;i<=n;i++)
    ans = ans*i;
    return ans;
}




int main()
{
    int a , b;
    cout<<"Enter the number: ";
    cin>>a>>b;
    cout<<fact();
    cout<<endl;
    // A is prime or not 
    cout<<Prime(a)<<endl;
    // A ka factorial
    cout<<fact(a)<<endl;
    // B is Prime or not
    cout<<Prime(b)<<endl;
    // B ka factorial
    cout<<fact(b)<<endl;
    // (B-A) is Prime or not
    cout<<Prime(b-a)<<endl;
    // (B-A) ka factorial
    cout<<fact(b-a)<<endl;
}