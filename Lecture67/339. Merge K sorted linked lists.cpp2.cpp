// second solution of 339
/* struct Node {
    int data;
    Node* next;
    Node(int x) : data(x), next(nullptr) {}
}; */

Node* merge(Node* first, Node* second){

    Node* dummy = new Node(0);
    Node* tail = dummy;

    while(first&&second){
        if(first->data<=second->data){
            tail->next = first;
            first = first->next;
            tail = tail->next;
        }
        else{
            tail->next = second;
            second = second->next;
            tail = tail->next;
        }
    }

    if(first){
        tail->next = first;
    }

    if(second){
        tail->next = second;
    }

    return dummy->next;
}

Node* mergeSort(Node* arr[], int start, int end){
    
    if(start==end){
        return arr[start];
    }

    if(start>end){
        return NULL;
    }

    int mid = start+(end-start)/2;

    Node* left = mergeSort(arr,start,mid);
    Node* right = mergeSort(arr,mid+1,end);

    return merge(left,right);
}


Node* mergeKLists(Node* arr[], int K) {
    // Your code here

    return mergeSort(arr,0,K-1);
}