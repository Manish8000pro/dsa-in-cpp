#include<iostream>
using namespace std;

void swap(int &a,int &b) //pass by reference
{
    int c;
    c=a;
    a=b;
    b=c;

}

void swap(float &c, float &d) // Function Overloading
{
    float r = c;
    c=d;
    d=r;
}

int main()
{
    int a,b;
    cout<<"Enter the number: ";
    cin>>a>>b;

    swap(a,b);
    cout<<a<<" "<<b<<" ";
    cout<<endl;

    float f1=4.8,f2=3.6;
    swap(f1,f2);
    cout<<f1<<" "<<f2;
}