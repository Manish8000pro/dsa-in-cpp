#include<iostream>
using namespace std;

class Node(){
    public:
    int data;
    Node *next;

    Node(int value){
        data = value;
        next = NULL;
    }
};

class Queue{
    Node *front , *rear;
    int size;

    Queue(){
        front = rear= NULL; 
        size = 0;
    }

    bool isEmpty(){
        retrun size==0;
    }

    void push(int x){
        if(isEmpty()){
            front = rear= new Node(x);
            cout<<x<<" Pushed into Queue\n";
            return;
        }
    }
}

int main(){

}