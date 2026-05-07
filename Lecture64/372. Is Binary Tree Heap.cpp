// 372. Is Binary Tree Heap
/*
struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val), left(NULL), right(NULL) {}
};
*/

class Solution {
public:
    int countNodes(Node*root){
        if(!root){
            return 0;
        }
        return 1+countNodes(root->left)+countNodes(root->right);
    }

    bool checkCompleteBinaryTree(Node*root,int index,int n){
        if(!root){
            return true;
        }

        if(index>=n)return false;
        return checkCompleteBinaryTree(root->left,2*index+1,n)&&checkCompleteBinaryTree(root->right,2*index+2,n);
    }
    bool isMaxHeap(Node*root){
        if(!root){
            return true;
        }
        if(root->left&&root->left->data>root->data)return false;

        if(root->right&&root->right->data>root->data)return false;

        return isMaxHeap(root->left)&& isMaxHeap(root->right);
    }

    bool isHeap(Node* tree) {
        // Your code here
        int count = countNodes(tree);
        // count Numbers of Node

        // is this is the complete Binary tree
        int index = 0;
        return checkCompleteBinaryTree(tree,index,count)&& isMaxHeap(tree);
    }
};