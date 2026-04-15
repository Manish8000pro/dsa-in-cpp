/*
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
public:

    Node* find(Node* root){
        Node* curr = root->left;

        while(curr->right){
            curr = curr->right;
        }

        return curr;
     }


    Node* deleteNode(Node* root, int x) {
        // Your code here
        if(!root){
            return NULL;
        }
        if(x<root->data){
            root->left = deleteNode(root->left,x);
        }
        else if(x>root->data){
            root->right = deleteNode(root->right,x);
        }
        else{
            // leaf Node
            if(!root->left&&!root->right){
                delete root;
                return NULL;
            }
            // 1 Node exist krta ho either left or right
            else if(!root->left){
                Node* temp = root->right;
                delete root;
                return temp;
            }
            else if(!root->right){
                Node* temp = root->left;
                delete root;
                return temp;
            }

            // both left and right exist 
            // left side ke largest element ko leke aao 
            Node* pred = find(root);
            root->data = pred->data;
            root->left = deleteNode(root->left,pred->data);
        }
        return root;
    }
};