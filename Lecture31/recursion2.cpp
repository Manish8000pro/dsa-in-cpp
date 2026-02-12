#include<iostream>
using namespace std;

void print (int num){
    
    if(num==0){
        return;
    }

    cout<<num<<" ";
    print(num-1);
}


int main(){

    print(20);

    return 0;

}