/**
 * Definition for a binary tree node.
 * struct Node {
 *     int data;
 *     Node *left;
 *     Node *right;
 *     Node(int x) : data(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    Node* buildBST(vector<int>&nums,int start,int end){
        if(start>end){
            return NULL;
        }

        int mid = start+(end-start)/2;
        Node *root = new Node(nums[mid]);

        root->left = buildBST(nums,start,mid-1);
        root->right = buildBST(nums,mid+1,end);

        return root;

    }

    Node* sortedArrayToBST(vector<int>& nums) {
        // Your code here
        return buildBST(nums,0,nums.size()-1);
    }
};