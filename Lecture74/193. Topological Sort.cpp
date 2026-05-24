 // 193. Topological Sort
 class Solution {
public:
    // mark node as visited 
    void topSort(vector<int>adj[],int node,vector<bool>&visited,vector<int>&result){
        visited[node]=1;

        for(int neib: adj[node]){
            if(!visited[neib]){
                topSort(adj,neib,visited,result);
            }
        }

        result.push_back(node);
    }

    vector<int> topologicalSort(int v, vector<vector<int>>& edges) {
        // Your code here
        vector<int>adj[v];

        for(auto edge: edges){
            adj[edge[0]].push_back(edge[1]);
        }

        vector<bool>visited(v,0);
        vector<int>result;

        for(int i=0;i<v;i++){
            if(!visited[i]){
                topSort(adj,i,visited,result);
            }
        }

        reverse(result.begin(),result.end());

        return result;
    }
};