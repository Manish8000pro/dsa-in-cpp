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



int main(){
    int arr[] = {10,11,24,53,56,77,75,27,98,33};

    Node* root = NULL;
    for(int i=0;i<10;i++){

    }
}