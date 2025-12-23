#include<iostream>
using namespace std;

void printvalue(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
}

int main(){
    int arr[5] = {10,20,30,40,50};
    printvalue(arr,5);

    int marks[8] = {30,50,60,33,66,60,90,55};
    printvalue(marks,8);

    return 0;

}