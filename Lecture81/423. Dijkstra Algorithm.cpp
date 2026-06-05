// 423. Dijkstra Algorithm
class Solution {
  public:
    vector<int> dijkstra(int V, vector<vector<int>>& edges, int src) {
        // code here
        //adjency list create krni hogi which also stroe the weight

        vector<pair<int,int>>adj[V];
        // node weight

        for(auto edge: edges){
            int u = edge[0];
            int v = edge[1];
            int weight = edge[2];

            adj[u].push_back({v,weight});
            adj[v].push_back({u,weight});
        }

        vector<int>dist(V,INT_MAX);
        dist[src] = 0;

        // min heap 

        // pair <int ,int> : {diat} node

        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;

        pq.push({0,src});

        while(!pq.empty()){
            pair<int,int>element = pq.top();
            pq.pop();
            int node = element.second;
            int distance = element.first;

            if(distance>dist[node]){
                continue;
            }

            // look at the all neib of node

            for(auto v: adj[node]){
                int neib = v.first;
                int wt = v.second;

                if(dist[neib]>dist[node]+wt){
                    dist[neib] = dist[node]+wt;
                    pq.push({dist[neib],neib});
                }
            }
        }

        return dist;
    }
};