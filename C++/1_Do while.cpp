#include<iostream>
using namespace std;
int main()
// {
//     int n;
//     cout<<"Enter the number ";
//     cin>>n;

//     int i=1; // initlize 

//    do {
//     cout<<i<<endl;
//     i++; // update 
//    } while(i<=n); // Break
// }

// {
//     int n;
//     cout<<"Enter the number ";
//     cin>>n;

//     int i=1; // initlize 

//    do {
//     cout<<i*n<<endl;
//     i++; // update 
//    } while(i<=10); // Break
// } 

{
    //Break  
    // for(int i=1;i<=10;i++)
    // {
    //     if(i==4)
    //     break;

    //     cout<<i<<" ";
    // }

    //continue

    for(int i=1;i<=100;i++)              
    {
        if(i%4==0)
       continue;

        cout<<i<<" ";
    }

}
