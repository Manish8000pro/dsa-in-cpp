#include<iostream>
#include <queue>
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


// Node left right    
void preorder(Node *root){
    if (!root)
    {
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
    
}

// left Node right

void inorder(Node *root){
    if (!root)
    {
        return;
    }
    
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
    
}

// left right Node

void postorder(Node *root){
    if (!root)
    {
        return;
    }
    
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

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
        cout<<"Enter the "<<temp->data<<" left Node: ";
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

    cout<<"preorder Traversal: "<<" ";
    preorder(root);
    cout<<endl;

    cout<<"inorder Traversal: "<<" ";
    inorder(root);
    cout<<endl;

    cout<<"postorder Traversal: "<<" ";
    postorder(root);
    cout<<endl;

    return 0;
    
}