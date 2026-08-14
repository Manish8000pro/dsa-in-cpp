//667. Range Maximum Query and Point Update
class SegmentTree {
public:

    vector<int>tree;
    int n;

    SegmentTree(vector<int>& arr) {
        // Your initialization code here
         n = arr.size();
        tree.resize(4*n);
        // buildTree;
        buildTree(0,0,n-1,arr);
    }

    void buildTree(int node,int start, int end, vector<int>&arr){
        
        if(start==end){
            tree[node]= arr[start];
            return;
        }

        int mid = start+(end-start)/2;

        buildTree(2*node+1,start,mid,arr);
        buildTree(2*node+2,mid+1,end,arr);


        tree[node] = max(tree[2*node+1],tree[2*node+2]);
    }

    void updateQuerry(int node, int start, int end, int index, int val){

        if(start==end){
            tree[node] = val;
            return;
        }

        int mid = start+(end-start)/2;

        if(index<=mid){
            updateQuerry(2*node+1,start,mid,index,val);
        }
        else{
            updateQuerry(2*node+2,mid+1,end,index,val);
        }

        tree[node] = max(tree[2*node+1],tree[2*node+2]);
    }

    int rangeQuerry(int node, int start, int end, int left, int right){
        // 1: Out of range
        if(end<left || start>right){
            return INT_MIN;
        }
        // 2: Completely range ke andar hai
        if(left<=start && end<=right){
            return tree[node];
        }
        // 3: Partial range

        int mid = start+(end-start)/2;

        int leftMax = rangeQuerry(2*node+1,start,mid,left,right);
        int rightMax = rangeQuerry(2*node+2,mid+1,end,left,right);

        return max(leftMax,rightMax);
    }

    
    void update(int index, int val) {
        // Your code here
        updateQuerry(0,0,n-1,index,val);
    
    }
    
    int query(int left, int right) {
        // Your code here

        return rangeQuerry(0,0,n-1,left,right);
    }
};