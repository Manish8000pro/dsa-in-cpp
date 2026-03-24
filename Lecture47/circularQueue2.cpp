#include<iostream>
using namespace std;

class Queue{
    public:
    int front,rear,capacity,totalElement;
    int *arr;

    Queue(int size){
        arr= new int [size];
        capacity = size;
        front = rear = -1;
        totalElement = 0;
    }

    bool isEmpty(){
        return totalElement==0;
    }


    bool isFull(){
        return totalElement==capacity;
    }

    void push(int x){
        if(isEmpty()){
            front = rear = 0;
            arr[rear] = x;
            totalElement++;
            cout<<x<<" Pushed into Queue\n";
        }
        else if(isFull()){
            cout<<"Queue is fulled\n";
            return;
        }
        else{
            rear=(rear+1)%capacity;
            arr[rear]=x;
            totalElement++;
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
            front = (front+1)%capacity;
            totalElement--;

            // if front becomes the greater then rear

            if(totalElement==0){
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
           return totalElement;
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
    q.pop();
    q.push(60);
    q.push(70);
    cout<<q.getFront()<<endl;
    q.push(29);
    q.push(39);

    cout<<q.isSize()<<endl;

    return 0;
}