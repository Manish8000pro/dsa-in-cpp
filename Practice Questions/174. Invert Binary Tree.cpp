// 174. Invert Binary Tree
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
// Time Complexity O(n) where n is the number of nodes in the binary tree
// Space complexity O(h) wherre h is the height of the binary tree
TreeNode* invertTree(TreeNode* root) {
    if(root == nullptr){
        return nullptr;
    }

    swap(root->left,root->right);

    invertTree(root->left);

    invertTree(root->right);

    return root;
}