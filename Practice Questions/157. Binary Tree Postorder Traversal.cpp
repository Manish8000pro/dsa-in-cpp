//157. Binary Tree Postorder Traversal
// struct TreeNode {
//     int val;
//     TreeNode *left;
//     TreeNode *right;
//     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
// };
// Time complexity o(n);
// space complexity O(h)
void solve(TreeNode *root,vector<int>&ans){
    if(root == nullptr){
        return;
    }

    // left subtree traversal 
    solve(root->left,ans);

    // right subtree Traversal
    solve(root->right,ans);

    // root
    ans.push_back(root->val);
}

vector<int> postorderTraversal(TreeNode* root) {
    vector<int>ans; 

    solve(root,ans);

    return ans;
}