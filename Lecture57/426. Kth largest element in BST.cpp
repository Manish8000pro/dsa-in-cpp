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
    void find(Node*root,int&k,int&result){
        if(!root||k<=0){
            return;
        }
        find(root->right,k,result);
        k--;
        if(k==0){
            result = root->data;
            return;
        }
        find(root->left,k,result);
    }

    int kthLargest(Node* root, int k) {
        // Your code here
        int result = -1;
        find(root,k,result);
        return result;
    }
};