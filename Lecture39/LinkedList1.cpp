#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next; 

    // constructer/
    Node(int value,Node*addrr){
        data = value;
        next = addrr;
    }
};

int main(){

    // Node N1(10,NULL);

    // N1.data = 10;
    // N1.next = NULL;

    // cout<<N1.data<<" ";

    Node*head = new Node(10,NULL);
    cout<<head->data<<" ";

    return 0;

}