#include<iostream>
using namespace std;

int sum(int arr[],int index,int n){

    // base condition 
    if(index==n){
        return 0;
    }


    int ans = arr [index]+sum(arr,index+1,n);
    return ans;
}

int main(){

    int arr[10] = {1,2,3,5,4,7,8,9,10,21};

    cout<<sum(arr,0,10);
    return 0;
}