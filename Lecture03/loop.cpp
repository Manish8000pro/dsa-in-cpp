#include<iostream>
using namespace std;
int main(){
    // sum of first n no.
    // int sum = 0;

    // for(int i=1;i<=10;i++){
    //    sum = sum+i; 
    // }
    // cout<< "Sum:- "<<sum<<endl;


    // Multiplication Table

    // int i, n ;
    // cout<<"Enter the number:- ";
    // cin>>n;
    // for(int i = 1;i<=10;i++){
    //     cout<<n*i<<endl;
    // }

    // Counting 

    // int i,n ;
    // cout<<"Enter the number: ";
    // cin>>n;
    // for(int i=1; i<=n; i++){
    //     cout<<i<<endl;
    // }


    // Reverse counting

    // int i,n;
    // cout<<"Enter The Number: ";
    // cin>>n;

    // for(int i=n;i>=1;i--)
    // cout<<i<<endl;

    // int i,n;
    // cout<<"Enter No.: ";
    // cin>>n;
    // while (i<=n)
    // {
    //     cout<<i<<endl;
    //     i++;
    // }
    

    // User input until correct

    int password;
    int correctPassword=1234;

    cout<<"Enter the Password here: ";
    cin>>password;

    while (password!= correctPassword)
    {
        cout<<"Wrong! Try again"<<endl;
        cin>>password;
    }

    cout<<"Acces granted!"<<endl;
    

}