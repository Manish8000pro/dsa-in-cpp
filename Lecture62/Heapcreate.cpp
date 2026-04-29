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

}