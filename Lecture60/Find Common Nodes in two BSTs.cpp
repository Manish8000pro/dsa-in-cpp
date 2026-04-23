//find Common Nodes in two BST 

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

    void inorder(Node* root,vector<int>&ans){
        if(!root){
            return;
        }

        inorder(root->left,ans);
        ans.push_back(root->data);
        inorder(root->right,ans);
    }

    vector<int> findCommon(Node *root1, Node *root2) {
        // Your code here
        vector<int>first;
        vector<int>second;
        inorder(root1,first);
        inorder(root2,second);

        vector<int>result;
        int i=0,j=0;
        while(i<first.size()&&j<second.size()){
            if(first[i]==second[j]){
                result.push_back(first[i]);
                i++;
                j++;
            }
            else if(first[i]<second[j]){
                i++;
            }
            else{
                j++;
            }
        }
        return result;
    }
};