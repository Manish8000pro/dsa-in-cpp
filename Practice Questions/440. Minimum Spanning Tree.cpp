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

    bool unite(int a,int b){
        a = find(a);
        b = find(b);

        // Already connected -> cycle

        if(a==b)
        return false;

        // Attach smaller componant to large

        if(size[a]<size[b])
        swap(a,b);

        parent[b] = a;
        size[a]+=size[b];
        
        return true;
    }
    
    int spanningTree(int V, vector<vector<int>>& edges) {
        // code here
        // sort edes by weight 
        sort(edges.begin(),edges.end(),
                [](vector<int>&a,vector<int>&b){
                return a[2]<b[2];
            });

        //initlize DSU

        parent.resize(V);
        size.assign(V,1);

        for (int i = 0; i < V; i++) {
            parent[i] = i;
        }

        int mstWeight = 0;
        int edgesUsed = 0;            