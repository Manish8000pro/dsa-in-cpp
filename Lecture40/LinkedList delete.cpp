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

    // How to delete a node 
    // first node ko delete kro 


    Node *temp = Head;
    Head = Head->next;
    delete temp;

    // delete the last node

    temp = Head;
    
    //  How to reach last node
     Node *prev = NULL;
    while(temp->next){
        prev = temp;
        temp = temp->next;
    }

    prev->next = NULL;
    delete temp;

    // 4th node delete krna h 

    temp = Head;
    int n = 3;
    while(--n){
        temp=temp->next;
    }
    prev = temp->next;
    temp->next = prev->next;
    delete prev;

    return 0;
}