#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int value){
        data = value;
        next = NULL;
    }
};

class Queue{
    public:
    Node *front , *rear;
    int size;

    Queue(){
        front = rear= NULL; 
        size = 0;
    }

    bool isEmpty(){
        return size==0;
    }

    void push(int x){
        if(isEmpty()){
            front = rear= new Node(x);
            cout<<x<<" Pushed into Queue\n";
            size++;
            return;
        }
        else{
            rear->next = new Node(x);
            rear = rear->next;
            cout<<x<<" Pushed into Queue\n";
            size++;
            return;
        }
    }

    void pop(){
        if(isEmpty()){
            cout<<" Queue is empty\n ";
        }
        else{
            Node* temp = front;
            size--;
            front = front->next;
            cout<<temp->data<<" Popped from Queue\n";
            delete temp;
            return;
        }
    }

    int getFront(){
        if(isEmpty()){
            cout<<"Queue is Empty\n";
            return -1;
        }
        else{
            return front->data;
        }
    }

    int isSize(){
        return size;
    }

};

    

int main(){
    Queue q;
    q.push(10);
    q.push(20);
    q.pop();
    cout<<q.isSize()<<endl;
}