//396. Check Tree Traversal
// this Question on strike 
// This not running in strike
class Solution{
public:
    unordered_map<int,int>inorderIndex;

    bool solve(vector<int>&preorder,vector<int>&inorder,vector<int>&postorder,int preStart,int inStart,int postStart,int len){
        
        if(len==0)
        return true;

        int root = preorder[preStart];
        // root must also be the last in postorder

        if(postorder[postStart+len-1]!=root)
        return false;

        // Root must exist in the current inorder range

        if(inorderIndex.find(root)==inorderIndex.end())
        return false;

        int rootIndex = inorderIndex[root];

        if(rootIndex<inStart || rootIndex>=inStart+len)
        return false;

        int leftSize = rootIndex - inStart;
        int rightSize = len - leftSize - 1;

        // check the left sub tree
        bool leftValid = solve(preorder,inorder,postorder,preStart+1,inStart,postStart,leftSize);

        if(!leftValid)
        return false;

        // check the right subTree
        bool rightValid = solve(preorder,inorder,postorder,preStart+1+leftSize,rootIndex+1,postStart+leftSize,rightSize);

        return rightValid;
    }

    bool checktree(int preorder[], int inorder[], int postorder[], int N) 
    {
    	// Your code here
        if(preorder.size()!= N || inorder.size()!= N || postorder.size()!= N)

        return false;

        inorderIndex.clear();

        for(int i = 0; i < N; i++) {
            inorderIndex[inorder[i]] = i;
        }

        return solve(preorder,inorder,postorder, 0, 0, 0, N);
    }
};