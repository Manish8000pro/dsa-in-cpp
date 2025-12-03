#include<iostream>
using namespace std;

int sum(int m,int n)
{
    int ans = m+n;
    return ans;
}

int Mul(int m,int n)
{
    int ans = m*n;
    return ans;
}

void fun()
{
    cout<<"Hello Coadr Army \n";
}

int main()
{
   int a,b;
   cout<<"Enter two number: ";
   cin>>a>>b;
   cout<<endl;

   cout<<sum(a,b);
   cout<<endl;
   cout<<Mul(a,b);
   cout<<endl;

   fun();
}