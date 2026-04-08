/*
struct Node {
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
public:
    // Function to convert a binary tree into its mirror tree.
    void mirror(Node* root) {
        // code here
        if(!root){
            return ;
        }
        // swap left and right node 

        Node* temp = root->left;
        root->left = root->right;
        root->right = temp;

        mirror(root->left);
        mirror(root->right);
    }
};