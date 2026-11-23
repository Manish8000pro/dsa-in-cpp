//176. Maximum Binary Tree
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
// Time Complexity: O(n^2) in worst case, O(nlogn) in average case
// space Complexity: O(n) for recursion stack
TreeNode* construct(vector<int>&nums,int left,int right){
    // base case
    if(left>right){
        return nullptr;
    }

    // Find maximum element index
    int maxIndex = left;

    for(int i = left;i<=right;i++){
        if(nums[i]>nums[maxIndex]){
            maxIndex = i;
        }
    }

    // create root node
    TreeNode* root = new TreeNode(nums[maxIndex]);
    // Build left subTree
    root->left = construct(nums,left,maxIndex-1);
    // Build right subtree
    root->right = construct(nums,maxIndex+1,right);

    return root;
}

TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
    
    return construct(nums,0,nums.size()-1);
}