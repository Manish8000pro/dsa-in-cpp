/*
struct Node {
    int data;
    Node *left, *right;
    Node(int val) : data(val), left(NULL), right(NULL) {}
};
*/

class Solution {
public:
    void inorder(Node*root,vector<int>&ans){
        if(!root){
            return;
        }

        inorder(root->left,ans);
        ans.push_back(root->data);
        inorder(root->right,ans);
    }

    void reversePostOrder(Node*root,vector<int>&ans,int &index){
        if(!root || index<0){
            return;
        }

        root->data = ans[index];
        index--;
        reversePostOrder(root->right,ans,index);
        reversePostOrder(root->left,ans,index);
    }

    void convertToMaxHeapUtil(Node* root) {
        // Your code here
        vector<int>ans;
        inorder(root,ans);
        int index = ans.size()-1;

        reversePostOrder(root,ans,index);
    }
};