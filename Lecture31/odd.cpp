#include<iostream>
using namespace std;

void printOdd(int num){
   
    if(num==0){
        return;
    }

    printOdd(num-1);

    if(num%2!=0){
        cout<<num<<" ";
    }
}

int main(){

    //print odd number
    printOdd(20);

    return 0;

}