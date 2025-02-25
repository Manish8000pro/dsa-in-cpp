#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter number:- ";
    cin>>num;

    if (num==1)
    cout<<"Mon";
    else if (num==2)
    cout<<"Tue";
    else if (num==3)
    cout<<"Wed";
    else if (num==4)
    cout<<"Thu";
    else if (num==5)
    cout<<"Fri";
    else if (num==6)
    cout<<"Sat";
    else if (num==7)
    cout<<"Sun";
    else 
    {
       cout<<"Enter valid number"; 
    }
  
}