#include<iostream>
using namespace std;

void print(int arr[],int index){

    // base condition
    if(index==-1){
        return;
    }

    // phle index ko decrease kro 
    print(arr,index-1);

    // phir print kravo
    cout<<arr[index]<<endl;
}

int main(){

    int arr[10] = {1,2,3,5,6,7,8,9,10,11};

    print(arr,9);
    return 0;
}