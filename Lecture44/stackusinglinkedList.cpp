#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

class Stack{
    public:
    Node* index;
    int sizes;


    Stack(){
        index = NULL;
        sizes = 0;
    }

    void push(int val){
        Node *temp = new Node(val);
        if(!temp){
            cout<<"stack overflow\n";
            return;
        }
        temp->next = index;
        sizes++;
        index = temp;
        cout<<val<<" Pushed into the stack\n";
    }

    void pop(){
        if(index==NULL){
            cout<<"stack is underflow\n";
        }
        else{
            cout<<index->data<<"popped from the stack\n";
            Node *temp = index;
            index = index->next;
            delete temp;
            sizes--;
        }
    }

    int top(){
        return index->data;
    }

    int size(){
        return sizes;
    }

    bool empty(){
        return sizes==0;
    }
};

    

int main(){

    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);
    cout<<s.size();

}