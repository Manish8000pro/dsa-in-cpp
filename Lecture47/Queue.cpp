#include<iostream>
using namespace std;

class Queue{
    public:
    int front,rear,capacity;
    int *arr;

    Queue(int size){
        arr= new int [size];
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
    
    void pop(){
        if(isEmpty()){
            cout<<"Queue is empty\n";
            return;
        }
        else{
            cout<<arr[front]<<" popped from the Queue\n";
            front = front+1;

            // if front becomes the greater then rear

            if(front>rear){
                front = rear = -1;
            }
        }
    }

    int getFront(){
            if(isEmpty()){
                cout<<"Queue is empty\n";
                return -1;
            }
            return arr[front];
        }

        int isSize(){
            if(isEmpty()){
                return 0;
            }
            return rear-front+1;
        }
};

    

int main(){
    Queue q(5);
    q.push(20);
    q.push(30);
    q.pop();
    cout<<q.isSize()<<endl;
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);

    return 0;
}