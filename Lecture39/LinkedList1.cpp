#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next; 

    // constructer/
    Node(int value){
        data = value;
        next = NULL;
    }
};

int main(){

    // Node N1(10,NULL);

    // N1.data = 10;
    // N1.next = NULL;

    // cout<<N1.data<<" ";

    // Node*head = new Node(10,NULL);
    // cout<<head->data<<" ";

    int arr[5] = {10,12,20,40,50};
    Node *Head = NULL, *Tail = NULL;


    // Create first node 
    for(int i=0;i<5;i++){
    if(!Head){
        // first Node Creation
        Head = new Node(arr[0]);
        Tail = Head;
    }
    else{
        // Other node creation by adding element Last
        Tail->next = new Node(arr[i]);
        Tail = Tail->next;
    }
    }

    // travese the linkedlist

    Tail = Head;

    while(Tail!=NULL){
        cout<<Tail->data<<" ";
        Tail = Tail->next;
    }

    return 0;

}