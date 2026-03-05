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

    int arr[5] = {10,12,20,40,50};

     Node *Head = NULL;

    for(int i=0;i<5;i++){
        // Create first node 
        if(!Head){
            Head = new Node(arr[i]);
        }
        else{
            Node *temp = new Node(arr[i]);
            temp->next = Head;
            Head = temp;
        }
    }
    
    

    // travese the linkedlist
    Node *temp = Head;

    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }

    // insert a node after a particullar Node  
    // inser 100 after 12;
     
    temp = Head;
    while (temp->data!=12)
    {
        temp = temp->next;
    }

    //insert after 12
    Node *newNode = new Node(100);
    newNode->next = temp->next;
    temp->next = newNode;
    
    cout<<endl;
    
    // Print it 
    temp = Head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }

    // insert a element before a element 12 se phale 300 ki insert krna h 

    if(Head->data==12){
        Node *temp = new Node(300);
        temp->next = Head;
        Head = temp;
    }
    Node *prev = NULL,*curr = Head;
    while (curr->data!=12)
    {
        prev = curr;
        curr = curr->next;
    }
    temp = new Node(300);
    temp->next = curr;
    prev->next = temp;

    cout<<endl;
    
    // Print it 
    temp = Head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    

    return 0;

}