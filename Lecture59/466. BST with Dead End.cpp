// check the dead end 
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

    bool checkDeadEnd(Node* root,int minValue , int maxValue){
        if(!root){
            return false;
        }
        // leaf node 
        if(!root->left&&!root->right){
            // if leaf node is dead end 
            if(minValue==root->data-1 && maxValue==root->data+1){
                return true;
            }
            else{
                return false;
            }
        }


        return checkDeadEnd(root->left,minValue,root->data) || checkDeadEnd(root->right,root->data,maxValue);
    }

    bool isDeadEnd(Node *root) {
        // Your code here
        return checkDeadEnd(root,0,100001);
    }
};