#include<iostream>
using namespace std;

class Queue{
    public:
    int front,rear,capacity;
    int *arr;

    Queue(int size){
        arr= new int size[];
        capacity = size;
        front = rear = -1;
    }

    bool isEmpty(){
        return rear==-1;
    }


    bool isFull(){
        return rear==capacity-1;
    }

    void push(int x){
        if(isEmpty()){
            front = rear = 0;
            arr[rear] = x;
            cout<<x<<" Pushed into Queue\n";
        }
        else if(isFull()){
            cout<<"Queue is fulled\n";
            return;
        }
        else{
            rear=rear+1;
            arr[rear]=x;
            cout<<x<<" Pushed into Queue\n";
            return;
        }
    }
}

    void pop(){
        if(isEmpty()){
            cout<<"Queue is empty\n";
            return;
        }
        else{
            front = front+1;
        }
    }

int main(){

}