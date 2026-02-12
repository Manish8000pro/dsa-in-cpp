#include<iostream>
using namespace std;

void BirthdayCount(int i){
    if(i==0){
        cout<<"Happy Birthday";
        return ;
    }
    cout<<i<<"days left for  Birthday\n";
    BirthdayCount(i-1);
}

int main(){

    // for(int i=30;i>0;i--){
    //     BirthdayCount(i);
        
    // }

    BirthdayCount(30);

    // cout<<"Happy Birthday";

    return 0;
}