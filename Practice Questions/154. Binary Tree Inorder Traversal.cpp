// 154. Binary Tree Inorder Traversal 
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
// Time complexity o(n);
// space complexity o(h);
void solve(TreeNode* root,vector<int>& ans){
    // base case
    if(root == nullptr){
        return;
    }

    // left subtree traversal 
    solve(root->left,ans);

    // root
    ans.push_back(root->val);

    // Right subtree

    solve(root->right,ans);

}

vector<int> inorderTraversal(TreeNode* root) {
    vector<int>ans;

    solve(root,ans);

    return ans;
}