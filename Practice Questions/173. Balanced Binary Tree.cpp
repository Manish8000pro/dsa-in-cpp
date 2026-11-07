// 173. Balanced Binary Tree
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
// Time complexity O(n)
// space complexity O(h);

int checkHeight(TreeNode* root){
    if(root == nullptr){
        return 0; 
    }

    int leftHeight = checkHeight(root->left);

    if(leftHeight == -1){
        return -1;
    }

    int rightHeight = checkHeight(root->right);

    if(rightHeight == -1){
        return -1;
    }

    if(abs(leftHeight - rightHeight)>1){
        return -1;
    }

    return 1 + max(leftHeight, rightHeight);
}

bool isBalanced(TreeNode* root) {

    return checkHeight(root) != -1;
}