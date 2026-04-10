/*
struct Node
{
    int data;
    Node* left;
    Node* right;
};
*/
class Solution
{
    public:
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.

    void find(Node* root,int&LeftMost,int&RightMost,int pos){
        if(!root){
            return;
        }

        LeftMost = min(pos,LeftMost);
        RightMost = max(pos,RightMost);

        find(root->left,LeftMost,RightMost,pos-1);
        find(root->right,LeftMost,RightMost,pos+1);
    }

    vector<int> topView(Node *root)
    {
        //Your code here
        if(!root){
            vector<int>ans;
            return ans;
        }
        queue<Node*>q;
        queue<int>position;

        // Array ka size kese kitna hoga 
        // RightMost-LeftMost+1 = array ka size hoga

        int LeftMost = 0 , RightMost=0;
        find(root,LeftMost,RightMost,0);

        vector<int>ans(RightMost-LeftMost+1);
        vector<bool>traverse(RightMost-LeftMost+1,0);

        q.push(root);
        position.push(0);

        while(!q.empty()){
            Node* temp = q.front();
            q.pop();
            int pos = position.front();
            position.pop();

            // particular node jo mene nikala h , Kya ye mera answer ho sakta h
            int index = pos-LeftMost;

            if(traverse[index]==0){
                traverse[index]=1;
                ans[index]=temp->data;
            }

            if(temp->left){
                q.push(temp->left);
                position.push(pos-1);
            }

            if(temp->right){
                q.push(temp->right);
                position.push(pos+1);
            }
        }
        return ans;
    }
};