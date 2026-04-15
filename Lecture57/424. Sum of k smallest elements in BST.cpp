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
    void findSum(Node*root,int&k,int&total){
        if(!root||k<=0){
            return;
        }

        findSum(root->left,k,total);
        k--;
        if(k>=0){
            total+=root->data;
        }
        findSum(root->right,k,total);
    }


    int sum(Node* root, int k) {
        // Your code here
        int total=0;
        findSum(root,k,total);
        return total;
    }
};