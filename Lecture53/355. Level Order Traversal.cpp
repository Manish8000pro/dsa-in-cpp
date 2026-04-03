struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
  public:
    vector<vector<int>> levelOrderTraversal(TreeNode* root) {
        // code here
        vector<vector<int>>ans;

        if(!root){
            return ans;
        }
        queue<TreeNode*>q;
        q.push(root);

        while(!q.empty()){
            int len = q.size();
            // number of element in current level

            vector<int>result;

            while(len--){
                TreeNode* temp = q.front();
                q.pop();

                result.push_back(temp->val);

                if(temp->left){
                    q.push(temp->left);
                }

                if(temp->right){
                    q.push(temp->right);
                }
            }
            ans.push_back(result);
        }

        return ans;
    }
};