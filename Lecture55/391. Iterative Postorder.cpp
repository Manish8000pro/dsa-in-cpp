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
    vector<int> postOrder(Node* root) {
        // code here
        vector<int>ans;
        if(!root){
            return ans;
        }

        stack<Node*>s;
        s.push(root);

        while(!s.empty()){
            Node* temp = s.top();
            s.pop();
            ans.push_back(temp->data);

            if(temp->left){
                s.push(temp->left);
            }
            if(temp->right){
                s.push(temp->right);
            }
            
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};