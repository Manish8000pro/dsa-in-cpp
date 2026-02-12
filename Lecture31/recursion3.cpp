#include<iostream>
using namespace std;

void PrintEven(int num){
    if(num==0){
        return;
    }
    cout<<num<<" ";
    PrintEven(num-2);
}

int main(){

    PrintEven(10);
}