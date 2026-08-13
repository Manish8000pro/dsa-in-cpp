#include<iostream>
using namespace std;

class SegmentTree{
    public:
    vector<int>tree;
    int n;
    // array ka size ha original wala 
    SegmentTree(vector<int>&arr){
        n = arr.size();
        tree.resize(4*n);
        // build tree(0,0,n-1,arr)
        buildTree(0,0,n-1,arr);
    }

    void buildTree(int node,int start,int end,vector<int>&arr){
        if(start==end){
            tree[node] = arr[start];
            return; 
        }
        
        int mid = start+(end-start)/2;

        buildTree(2*node+1,start,mid,arr);
        buildTree(2*node+2,mid+1,end,arr);

        tree[node] = tree[2*node+1]+tree[2*node+2];
        
    }
}

int main(){
    vector<int>arr = {1,5,2,6,91,8,6,8,90,11,23,10,2,4,8,19};

    SegmentTree st(arr);
    int n = arr.size();
}