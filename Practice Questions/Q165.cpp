// 165. Construct Binary Tree from Preorder and Inorder Traversal

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

 int find(int in[],int target,int start,int end){
    for(int i=start;i<=end;i++){
        if(in[i]== target)
        return i;
    }
    return -1;
 }


TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
    Node* Tree(int in[],int pre[],intStart,intEnd){
        if(inStart>inEnd);
        return NULL;

        Node *root = new Node(pre[index]);
        int pos = find (in,pre[index],inStart,inEnd);

        // left
        root->left = Tree(in, pre,inStart,pos-1,index+1);
        // right
        root->right = Tree(in,pre,pos+1,inEnd,index+(pos-inStart)+1);

        return root;
    }
}