#include<iostream>
using namespace std;

class MaxHeap{
    public:
    int *arr;
    int index;
    int size;

    MaxHeap(int n){
        arr = new int[n];
        size = n;
        index = 0;
    }

    void insert(int value){
        // heap overflow
        if(index==size){
            cout<<" Heap is overflow\n";
            return;
        }

        // arr[index] = value;
        // index++;

        if(index==0){
            arr[index] = value;
            cout<<arr[index]<<" Element inserted in Heap\n";
            index++;
            return;
        }

        arr[index] = value;
        int i = index;
        index++;

        while (i>0 && arr[i]>arr[(i-1)/2])  
        {
            swap(arr[i],arr[(i-1)/2]);
            i = (i-1)/2;
        }

        cout<<arr[i]<<" Element inserted in Heap\n";
        
    }

    void printHeap(){
        for(int i=0;i<index;i++){
            cout<<arr[i]<<" ";
        }
    }
};

int main(){
    MaxHeap h1(5);
    h1.insert(10);
    h1.insert(20);
    h1.insert(30);
    h1.insert(5);
    h1.insert(100);
    h1.insert(80);

    h1.printHeap();

    return 0;
}