//180. Validate Binary Search Tree
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
// Time complexity O(n) : in worst case O(n.h) where h is the height of the tree
// space complexity O(h) h is the height 
bool validate(TreeNode* node,long long minBound,long long maxBound){
    if(!node){
        return true;
    }

    if(node->val <= minBound || node->val >= maxBound){
        return false;
    }

    return validate(node->left,minBound,node->val) && validate(node->right,node->val,maxBound);
}

bool isValidBST(TreeNode* root) {
    return validate(root,LLONG_MIN,LLONG_MAX);
}