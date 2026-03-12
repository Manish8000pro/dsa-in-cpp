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
    Node *head = NULL,*tail =NULL ;

    for(int i=0;i<5;i++){
        if(!head){
            head = new Node(arr[i]);
            tail = head;
        }
        else{
            Node *temp = new Node(arr[i]);
            temp->prev = tail;
            tail->next = temp;
            tail = temp;
        }
    }

    

    // traverse : print the list 

    printDLL(head);

    return 0;
}