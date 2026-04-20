// Q.no 475
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

    void inorder(Node *root,Node* &prev,Node* &first,Node* &last){
        if(!root){
            return;
        }
        inorder(root->left,prev,first,last);

        if(prev && (root->data<prev->data)){
            // first decrease
            if(!first){
                first = prev;
                last = root;
            }
            else{
                last = root;
            }
            // second decrease 
        }
        prev = root;

        inorder(root->right,prev,first,last);
    }


    void correctBST(struct Node *root) {
        // Your code here
        Node* prev = NULL,*first = NULL,*last = NULL;

        inorder(root,prev,first,last);

        if(first){
            swap(first->data,last->data);
        }
    }
};