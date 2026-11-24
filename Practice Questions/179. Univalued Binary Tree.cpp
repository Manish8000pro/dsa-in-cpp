//179. Univalued Binary Tree 
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
// Time complexity O(n); in worst case O(n.h) where h is the height of the tree
// space complexity O(h) h is the height 
bool dfs(TreeNode* node,int val){
    if(!node){
       return true; 
    }
    
    if(node->val!=val){
        return false;
    }
    
    return dfs(node->left,val) && dfs(node->right,val);
}

bool isUnivalTree(TreeNode* root) {
    if(!root){
        return true;
    }
    
    return dfs(root,root->val);
}