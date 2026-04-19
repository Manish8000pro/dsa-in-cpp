// 163. Construct Binary Search Tree From Preorder Traversal
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

    TreeNode* buildBST(vector<int>& preorder, int minValue, int maxValue, int& index){
        
        if(index >= preorder.size() || preorder[index] < minValue || preorder[index] > maxValue){
            return NULL;
        }

        TreeNode* root = new TreeNode(preorder[index]);
        index++;

        root->left = buildBST(preorder, minValue, root->val, index);
        root->right = buildBST(preorder, root->val, maxValue, index);

        return root;
    }

    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int index = 0;
        return buildBST(preorder, INT_MIN, INT_MAX, index);
    }