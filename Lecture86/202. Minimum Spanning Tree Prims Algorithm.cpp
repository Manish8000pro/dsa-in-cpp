// 202. Minimum Spanning Tree Prims Algorithm
int spanningTree(int V, int E, vector<vector<int>> &edges) {
    vector<pair<int,int>>adj[V];
    // u->{v,wt}

    for(auto edge: edges){
        int u = edge[0];
        int v = edge[1];
        int wt = edge[2];

        adj[u].push_back({v,wt});
        adj[v].push_back({u,wt});
    }

    vector<bool>visited(V,0);
    // pair <int ,int>:wt,node

    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;

    pq.push({0,0});
    int cost = 0;

    while(!pq.empty()){
        int node = pq.top().second;
        int wt = pq.top().first;
        pq.pop();

        if(visited[node])
        continue;

        visited[node]=1;
        cost+=wt;

        for(auto neib: adj[node]){
            wt = neib.second;
            int vneib = neib.first;

            if(!visited[vneib]){
                pq.push({wt,vneib});
            }
        }
    }

    return cost;
}