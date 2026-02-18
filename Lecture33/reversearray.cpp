#include<iostream>
using namespace std;

void reverse(int arr[],int index,int n){

    // base condition
    if(index==n){
        return;
    }

   // aage bado 

   reverse(arr,index+1,n);

   // phir print kravo
   cout<<arr[index]<<endl;
}
int main(){

    int arr[10] = {1,2,3,5,6,7,8,9,10,11};

    reverse(arr,0,10);
    return 0;
}
