// 335. Shortest Path in Directed Graph
class Solution {
  public:
    vector<int> shortestPath(int V, int E, vector<vector<int>>& edges, int src) {
        // code here
        
        // code here
        // adjacency listy
        // 2D array
        // edge: 1D array

        // edges: 1D array
        // value jaati ek ek karke
        vector<int>adj[V];
        for(auto edge: edges){
            int u = edge[0];
            int v = edge[1];

            adj[u].push_back(v);
            
        }

        // create a dist array usko initlize karo do -1 se
        vector<int>dist(V,-1);
        dist[src] = 0;
        queue<int>q;
        q.push(src);

        while(!q.empty()){
            int node = q.front();
            q.pop();

            // look at all the neib who are unvisted, dist[neib] ==-1
            for(auto neib: adj[node]){
                if(dist[neib]==-1){
                    dist[neib] = dist[node]+1;
                    // src -> neib == src --> node + node->neib
                    q.push(neib);
                }
            }
        }

        return dist;
    }
};