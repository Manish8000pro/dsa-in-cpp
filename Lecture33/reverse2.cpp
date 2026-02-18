#include<iostream>
using namespace std;

void reverse(int arr[],int index){

    // base condition
    if(index==-1){
        return;
    }

    // print krna h 
    cout<<arr[index]<<endl;

    // phir index ko decrease krna h 

    reverse(arr,index-1);
}

int main(){

    int arr[10] = {1,2,3,5,6,7,8,9,10,11};

    reverse(arr,9);
    return 0;
}