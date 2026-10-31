// 155. Binary Tree Preorder Traversal
// struct TreeNode {
//     int val;
//     TreeNode *left;
//     TreeNode *right;
//     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
// };
void solve(TreeNode* root,vector<int>&ans){
    // base case

    if(root == nullptr){
        return;
    }

    // root 
    ans.push_back(root->val);

    // left subtree travesel 
    solve(root->left,ans);

    // right subtree travesal
    solve(root->right,ans);
}

vector<int> preorderTraversal(TreeNode* root) {
    vector<int>ans;

    solve(root,ans);

    return ans;
}