// 427. Shortest Path in an Undirected Graph
class Solution {
  public:
    vector<int> shortestPath(int V, int m, vector<vector<int>>& edges) {
        // code here
        vector<pair<int,int>>adj[V];
        // node , weight

        for(auto edge: edges){
            int u = edge[0]-1;
            int v = edge[1]-1;
            int weight = edge[2];

            adj[u].push_back({v,weight});
            adj[v].push_back({u,weight});
        }

        vector<int>dist(V,-1);
        dist[0]=0;

        // min heap 

        // paint <int,int>:{dist,node}

        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;

        pq.push({0,0});
        vector<int>Parent(V,-1);

        // distance node
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

                if(dist[neib]==-1 || (dist[neib]>dist[node]+wt)){
                    dist[neib]= dist[node]+wt;
                    Parent[neib] = node;
                    pq.push({dist[neib],neib});
                }
            }
        }

        // parent array
        vector<int>path;

        if(dist[V-1]==-1){
            path.push_back(-1);
            return path;
        }

        int curr = V-1;

        while(Parent[curr]!=-1){
            path.push_back(curr+1);
            curr = Parent[curr];
        }
        path.push_back(1);
        path.push_back(dist[V-1]);

        reverse(path.begin(),path.end());
        return path;
    }
};