#include<iostream>
using namespace std;

class Node{
    public:

    int val;
    Node* next, *prev;

    // constructer

    Node(int value){
        val = value;
        next = prev = NULL;
    }
};

void printDLL(Node *head){
    while (head)
    {
        cout<<head->val<<" ";
        head = head->next;
    }
    
}

int main(){

    int arr[5] = {1,2,3,4,5};
    Node *head = NULL;

    for(int i=0;i<5;i++){
        if(!head){
            head = new Node(arr[0]);
        }
        else{
            Node *temp = new Node(arr[1]);
            temp->next = head;
            head->prev = temp;
            head = temp;
        }
    }

    // traverse : print the list 

    printDLL(head);

    return 0;
}