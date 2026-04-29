#include<iostream>
using namespace std;

void heapify(int arr[],int index,int N){
    int largest = index;
    int left = 2*index+1;
    int right = 2*index+2;

    if(left<N && arr[left]>arr[largest])
    largest = left;

    if(left<N && arr[right]>arr[largest])
    largest = right;
}

void buildMaxHeap(int arr[],int N){
    for(int i=N/2-1;i>=0;i--){
        heapify(arr,i,N);
    }
}

int main(){
    int arr[] = {10,15,18,30,17,26,48,5,8,19};

    buildMaxHeap(arr,10);
    heapsort(arr,10);
    // print all elemnent of the heap
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
}