// 412. Search a node in BST

/*
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
public:
    // Function to search a node in BST.
    bool search(Node* root, int x) {
        // Your code here

        // Base condition 
        if(!root){
            return 0;
        }

        if(root->data == x){
            return 1;
        }

        if(x<root->data){
            return search(root->left,x);
        }
        else{
            return search(root->right,x);
        }

    }
    
};