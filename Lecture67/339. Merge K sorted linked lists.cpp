//  339. Merge K sorted linked lists
/* struct Node {
    int data;
    Node* next;
    Node(int x) : data(x), next(nullptr) {}
}; */

struct compare{
    bool operator()(Node*first,Node*second){
        return first->data>second->data;
    }
};


Node* mergeKLists(Node* arr[], int K) {
    // Your code here
     priority_queue<Node*, vector<Node*>, compare>pq;
    for(int i=0;i<K;i++){
        if(arr[i])pq.push(arr[i]);
    }
    Node* dummy = new Node(0);
    Node* tail = dummy;

    while(!pq.empty()){
        Node* curr = pq.top();
        pq.pop();

        

        tail->next = curr;
        curr = curr->next;
        tail= tail->next;
        if(curr){
            pq.push(curr);
        }
    }

    return dummy->next;
}
