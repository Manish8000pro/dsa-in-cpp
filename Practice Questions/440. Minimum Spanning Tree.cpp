// 440. Minimum Spanning Tree 
class Solution {
public:
    vector<int>parent;
    vector<int>size;

    int find(int x){
        if(parent[x]==x)
        return x;

        return parent[x] = find(parent[x]);
    }