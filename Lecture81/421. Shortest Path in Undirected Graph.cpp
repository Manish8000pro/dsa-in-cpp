// 421. Shortest Path in Undirected Graph
class Solution {
  public:
    vector<int> shortestPath(int V, int E, vector<vector<int>>& edges, int src) {
        // code here
        // adjency list 
        vector<int>adj[V];

        for(auto edge:edges){
            int u = edge[0];
            int v = edge[1];

            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        // create a adjency array usko initlize kr do -1 se

        vector<int>dist(V,-1);
        dist[src]=0;
        queue<int>q;
        q.push(src);

        while(!q.empty()){
            int node = q.front();
            q.pop();

            // look at all the neib who unvisited , dist[neib]==-1;

            for(auto neib: adj[node]){
                if(dist[neib]==-1){
                    dist[neib] = dist[node]+1;
                    // src-->neib == src-->node+node neib
                    q.push(neib);
                }
            }
        }
        return dist;
    }
};