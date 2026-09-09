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