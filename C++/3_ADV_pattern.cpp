#include<iostream>
using namespace std;
int main()
{
    int row,col,n;
    cout<<"Enter the input; ";
    cin>>n;
    for(row=1;row<=n;row=row+1)
    {  //print space
        
        for(col=1;col<=n-row;col=col+1)
        cout<<" ";

        for(col=1;col<=row;col=col+1)
        cout<<"* ";

        cout<<endl;
    }

    for(row=n;row>=1;row=row-1)
    {
        for(col=1;col<=n-row;col=col+1)
        cout<<" ";

        for(col=1;col<=row;col=col+1)
        cout<<"* ";

        cout<<endl;
    }
}