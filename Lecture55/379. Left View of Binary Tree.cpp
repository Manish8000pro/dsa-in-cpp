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

    void Lview(Node* root,vector<int>&ans,int level){
        if(!root){
            return;
        }
        if(ans.size()==level){
            ans.push_back(root->data);
        }

        Lview(root->left,ans,level+1);
        Lview(root->right,ans,level+1);
    }


    vector<int> leftView(Node *root) {
        // Your code here
        vector<int>ans;
        Lview(root,ans,0);

        return ans;
    }
};