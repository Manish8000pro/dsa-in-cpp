#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node*left, *right;

    Node(int val){
        data = val;
        left = right = NULL;
    }
};

Node* insert(Node* root,int val){
    return new Node(val);

        // BST 
    // left side

    if(val<root->data){
        root->left = insert(root->left,val);
    }
    else{
        root->right = insert(root->right,val);
    }

    return root;
}
// inorder Traversal

void inorder(Node*root){
    if(!root){
        return;
    }

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}


int main(){
    int arr[] = {10,11,24,53,56,77,75,27,98,33};

    Node* root = NULL;
    for(int i=0;i<10;i++){
        root = insert(root,arr[i]);
    }

    inorder(root);
}