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
    void Rview(Node* root,vector<int>&ans,int level){
        if(!root){
            return;
        }

        if(ans.size()==level){
            ans.push_back(root->data);
        }

        Rview(root->right,ans,level+1);
        Rview(root->left,ans,level+1);
    }
    vector<int> rightView(Node *root) {
        // Your code here
        vector<int>ans;
        Rview(root,ans,0);

        return ans;
    }
};