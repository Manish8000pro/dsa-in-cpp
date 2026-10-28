//152. Symmetric Tree
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

 // Time complexity o(n)
 // Space complexity o(h) or o(long n)
bool isMirror(TreeNode *left,TreeNode *right){
    // Both side are empty 
    if(left == nullptr && right==nullptr){
        return true;
    }
    // one node is empty 
    if(left==nullptr || right==nullptr){
        return false;
    }

    //node values are different
    if(left->val!=right->val){
        return false;
    }
    // compare mirror children
    return isMirror(left->left, right->right) && isMirror(left->right,right->left);
}
bool isSymmetric(TreeNode* root) {
    if(root==nullptr){
        return true;
    }
    return isMirror(root->left,root->right);
}