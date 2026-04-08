/*
struct Node {
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
    int calcHeight(Node* root,vector<int>&leftHeight,vector<int>&rightHeight){
        if(!root){
            return 0;
        }
        // leeaf Node 

        if(!root->left&&!root->right){
            return 1;
        }
        int heightofleft = calcHeight(root->left,leftHeight,rightHeight);
        int heightofright = calcHeight(root->right,leftHeight,rightHeight);

        leftHeight.push_back(heightofleft);
        rightHeight.push_back(heightofright);

        return 1+max(heightofleft,heightofright);
    }


    // Function to check if a binary tree is balanced or not.
    bool isBalanced(Node* root) {
        // code here
        vector<int>leftHeight;
        vector<int>rightHeight;

        calcHeight(root,leftHeight,rightHeight);

        for(int i=0;i<leftHeight.size();i++){
            if(abs(leftHeight[i]-rightHeight[i])>1){
                return 0;
            }
        }
        return 1;
    }
};