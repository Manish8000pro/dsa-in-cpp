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
        return size == 0;
    }

    // Pushback
    void pushBack(int val){
        if(isEmpty()){
            front = rear = new Node(val);
            size++;
        }
        else{
            rear->next = new Node(val);
            rear->next->prev = rear;
            rear = rear->next;
            size++;
        }
        cout<<val<<" pushBack into Deque\n";
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
         cout<<val<<" pushFront into Deque\n";
    }
    // popback
    void popBack(){
        if(isEmpty()){
            cout<<" Deque is empty\n";
            return;
        }
        else{
            // single element 
            if(rear==front){
                cout<<rear->data<<" popped back from Deque\n";
                delete rear;
                rear = front = NULL;
                size=0;
            }
            else{
                cout<<rear->data<<" popped back from Deque\n";
                rear = rear->prev;
                delete rear->next;
                rear->next = NULL;
                size--;
            }
        }
    }
    // popfront
    void popFront(){
        if(isEmpty()){
            cout<<" Deque is empty\n";
            return;
        }
        else{
            // single element 
            if(rear==front){
                cout<<front->data<<" popped front from Deque\n";
                delete rear;
                rear = front = NULL;
                size--;
            }
            else{
                cout<<front->data<<" popped front from Deque\n";
                front = front->next;
                delete front->prev;
                front->prev = NULL;
                size--;
            }
        }
    }

    int getFront(){
        if(isEmpty()){
            return -1;
        }
        return front->data;
    }

    int getBack(){
        if(isEmpty()){
            return -1;
        }
        return rear->data;
    }
};

int main(){
    Deque D;
    D.pushBack(10);
    D.pushBack(20);
    D.pushBack(55);
    D.pushFront(40);
    D.pushBack(21);
    D.pushFront(74);

    cout<<D.size<<endl;
    cout<<D.getBack()<<endl;
    cout<<D.getFront()<<endl;

    D.popBack();
    D.popFront();
      cout<<D.size<<endl;
    cout<<D.getBack()<<endl;
    cout<<D.getFront()<<endl;

}