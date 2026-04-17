/**
 * Definition for a binary tree node.
 * struct Node {
 *     int data;
 *     Node *left;
 *     Node *right;
 *     Node(int x) : data(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    bool isValid(Node*root,int minValue,int maxValue){
        if(!root){
            return 1;
        }
        if(root->data<=minValue||root->data>=maxValue){
            return 0;
        }
        return isValid(root->left,minValue,root->data) && isValid(root->right,root->data,maxValue);
    }

    bool isBST(Node* root) {
        // Your code here
        return isValid(root,INT_MIN,INT_MAX);
    }
};