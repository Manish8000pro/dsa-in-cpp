#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *prev,*next;


    Node(int value){
        data = value;
        prev = next = NULL;
    }
};

class Deque{
    public:
    Node *front, *rear;
    int size;

    Deque(){
        front = rear = NULL;
        size = 0;
    }

    bool isEmpty(){
        return size = 0;
    }

    // Pushback
    void pushBack(int val){
        if(isEmpty()){
            front = rear = new Node(val);
            size++;
        }
        else{
            rear->next new Node(val);
            rear->next->prev = rear;
            rear = rear->next;
            size++;
        }
    }
    // pushfront
    void pushFront(int val){
        if(isEmpty()){
            front = rear = new Node(val);
            size++;
        }
        else{
            front->prev = new Node(val);
            front->prev->next = front;
            front = front->prev;
            size++;
        }
    }
    // popback
    // popfront
}

int main(){

}