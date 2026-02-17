#include<iostream>
using namespace std;

void print(int arr[],int index,int n){

    // base condition
    if(index==n){
        return;
    }

    // print krna h 
    cout<<arr[index]<<endl;

     print(arr,index+1,n);
}

int main(){

   int arr[10] = {1,2,3,5,6,7,8,9,10,11};

    print(arr,0,10);
    return 0;
}