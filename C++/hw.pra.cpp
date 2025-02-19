#include<iostream>
using namespace std;
int main()
{
    int number;
    {
        cout<<"Enter your age ";
        cin>>number;
        if (number>18)
        {
            cout<<"Result="<<"Adult";
        }else
        {
            cout<<"Teenager";
        }
    

    }
}
