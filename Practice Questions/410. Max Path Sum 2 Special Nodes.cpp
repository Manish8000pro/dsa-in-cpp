//410. Max Path Sum 2 Special Nodes 
 /*
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/
class Solution {
public:
    int solve(Node* root , int &ans){
        //if special node = leaf
        if(!root->left && !root->right)
        return root->data;

        // both children exist 
        if(root->left && root->right){
            int leftSum = solve(root->left,ans);
            int rightSum = solve(root->right,ans);

            // complete special node to special  node path
            ans = max(ans,leftSum+rightSum+root->data);

            // Return one branch to parent
            return root->data + max(leftSum, rightSum);
        }

        // Only left child
        if (root->left)
        return root->data + solve(root->left, ans);

        //  Only right child 
        
        return root->data + solve(root->right,ans);
    }
    int maxPathSum(Node* root) {
        // Your code here
        int ans = INT_MIN;

        int rootPath = solve(root,ans);
        
        // Root itself is special if it has exactly one child
        if(!root->left || !root->right){
            ans = max(ans,rootPath);
        }

        return ans;

    }
}; 