#include<iostream>
using namespace std;

void printOdd(int num){
    if(num==0){
        return;
    }
    cout<<num<<"";
    printOdd(num-3);
}

int main(){

    //print odd number
    printOdd(20);

    return 0;

}