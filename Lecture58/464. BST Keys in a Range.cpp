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
    void inorder(Node*root,int low ,int high,vector<int>&ans){
        if(!root){
            return;
        }
        inorder(root->left,low,high,ans);
        if(root->data >= low&&root->data <= high){
            ans.push_back(root->data);
        }
        inorder(root->right,low,high,ans);
    }

    vector<int> printNearNodes(Node *root, int low, int high) {
        // Your code here
        vector<int>ans;
        inorder(root,low,high,ans);

        return ans;
    }
};