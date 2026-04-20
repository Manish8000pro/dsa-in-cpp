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
    Node* LCA(Node* root, int n1, int n2) {
        // Your code here
        while(root){
                if(n1<root->data&& n2<root->data){
                root = root->left;
            }
            else if(n1>root->data&&n2>root->data){
                root = root->right;
            }
            else{
                return root;
            }
        }

        return NULL;
        
    }
};