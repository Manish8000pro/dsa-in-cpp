// 422. Shortest path in Directed Acyclic Graph
class Solution {
  public:
    vector<int> shortestPath(int V, int E, vector<vector<int>>& edges) {
        // code here
        vector<pair<int,int>>adj[V];
        vector<int>InDegree(V,0);

        for(auto edge: edges){
            int u = edge[0];
            int v = edge[1];
            int wt = edge[2];
            adj[u].push_back({v,wt});
            InDegree[v]++;
        }

        // find the topological sort usning khn's algorithm

        queue<int>q;
        for(int i=0;i<V;i++){
            if(InDegree[i]==0)
            q.push(i);
        }

        // top sort answer , store array
        vector<int>topSort;

        while(!q.empty()){
            int node = q.front();
            q.pop();
            topSort.push_back(node);
            for(auto p: adj[node]){
                int neib = p.first;
                // int wt = p.second;
                InDegree[neib]--;
                if(InDegree[neib]==0)
                q.push(neib);
            }
        }

        // top sort ans me mil jaayga
        vector<int>dist(V,-1);
        // sari values ko -1 se initilize kr do 
        dist[0]=0;

        for(int i=0;i<topSort.size();i++){
            int node = topSort[i];
            if(dist[node]==-1)
            continue;

            for(auto p: adj[node]){
                int neib = p.first;
                int wt = p.second;

                if(dist[neib]==-1)
                dist[neib] = dist[node]+wt;
                else{
                    dist[neib] = min(dist[neib],dist[node]+wt);
                }
            }
        }

        return dist;
    }
};