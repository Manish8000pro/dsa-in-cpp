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

bool isIdentical(Node *r1, Node *r2) {
    // Your code here
    if(!r1&&!r2){
        return 1;
    }
    if((!r1&&r2)||(r1&&!r2)){
        return 0;
    }
    if(r1->data!=r2->data){
        return 0;
    }

    return isIdentical(r1->left,r2->left)&&isIdentical(r1->right,r2->right);
}