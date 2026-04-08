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

vector<int> findSpiral(Node *root) {
    // Your code here
    vector<int>ans;
    if(!root){
        return ans;
    }

    stack<Node*>s1;
    stack<Node*>s2;
    s1.push(root);

    while(!s1.empty()||!s2.empty()){
        while(!s1.empty()){
            Node* temp = s1.top();
            s1.pop();
            ans.push_back(temp->data);

            // right

            if(temp->right){
                s2.push(temp->right);
            }

            // left
            if(temp->left){
                s2.push(temp->left);
            }
        }

        while(!s2.empty()){
            Node* temp = s2.top();
            s2.pop();
            ans.push_back(temp->data);

            if(temp->left){
                s1.push(temp->left);
            }
            if(temp->right){
                s1.push(temp->right);
            }
        }

    }
        return ans;
}