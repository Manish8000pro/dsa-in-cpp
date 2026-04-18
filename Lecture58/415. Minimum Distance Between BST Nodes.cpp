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
    void find(Node*root,int &preValue,int &minDiff){
        if(!root){
            return;
        }
        find(root->left,preValue,minDiff);
         if(preValue!=INT_MIN)
        minDiff = min(minDiff, root->data-preValue);

        preValue = root->data;



        find(root->right,preValue,minDiff);
    }

    int minDiffInBST(Node* root) {
        // Your code here
        int preValue = INT_MIN;
        int minDiff = INT_MAX;

        find(root,preValue,minDiff);

        return minDiff;
    }
};