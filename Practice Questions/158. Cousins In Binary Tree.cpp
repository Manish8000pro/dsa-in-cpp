//158. Cousins In Binary Tree
 
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
bool isCousins(TreeNode* root, int x, int y) {

    if(root == nullptr){
        return false;
    }

    queue<pair<TreeNode*, TreeNode*>> q;

    q.push({root, nullptr});

    while(!q.empty()){

        int size = q.size();

        TreeNode* xParent = nullptr;
        TreeNode* yParent = nullptr;

        for(int i = 0; i < size; i++){

            auto [node, parent] = q.front();
            q.pop();

            if(node->val == x){
                xParent = parent;
            }

            if(node->val == y){
                yParent = parent;
            }

            if(node->left){
                q.push({node->left, node});
            }

            if(node->right){
                q.push({node->right, node});
            }
        }

        // Check after processing the complete level
        if(xParent != nullptr && yParent != nullptr){
            return xParent != yParent;
        }
    }

    return false;
}