// 441. Hamiltonian Path
// solution
class Solution {
public:

    bool findHamiPath(vector<int>adj[],int node,vector<bool>&visited,int &count,int n){
        visited[node] = 1;
        count++;
        if(count==n)
        return 1;

        for(auto neib: adj[node]){
            if(!visited[neib]&&findHamiPath(adj,neib,visited,count,n))
            return 1;
        }

        visited[node] = 0;
        count--;

        return 0;
    }

    bool check(int n, int m, vector<vector<int>>& edges) {
        // code here
        vector<bool>visited(n,0);
        vector<int>adj[n];

        for(auto edge: edges){
            adj[edge[0]-1].push_back(edge[1]-1);
            adj[edge[1]-1].push_back(edge[0]-1);
        }

        int count = 0;

        for(int i=0;i<n;i++){
            if(findHamiPath(adj,i,visited,count,n))
            return 1;
        }

        return 0;
    }
};