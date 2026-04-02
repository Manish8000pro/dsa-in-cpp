#include<iostream>
using namespace std;

class Node{
        public:
        int data;
        Node *left, *right;

        Node(int val){
            data = val;
            left = right = NULL;
        }
    };

int main(){
    
    int x , leftValue,rightValue;
    cout<<"Enter the root node: ";
    cin>>x;
    Node *root = new Node(x);
    queue<Node*>q;
    q.push(root);

    while (!q.empty())
    {
        Node* temp = q.front();
        q.pop();

        // left Value
        cout<<"Enter the "<<temp->data<<"left Node: ";
        cin>>leftValue;

        if(leftValue!=-1){
            temp->left = new Node(leftValue);
            q.push(temp->left);
        }

        // Right Value

        cout<<"Enter the "<<temp->data<<"right Node: ";
        cin>>rightValue;

        if(rightValue!=-1){
            temp->right = new Node(rightValue);
            q.push(temp->right);
        }
    }

    return 0;
    
}