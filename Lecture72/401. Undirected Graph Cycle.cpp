 // 401. Undirected Graph Cycle
 // Function to detect cycle in an undirected graph.

bool findLoop(vector<vector<int>>&adj,vector<bool>&visited,int node, int parent){
    visited[node]=1;

    for(int neib:adj[node]){
        if(neib==parent){
        continue;
        }

        else if(visited[neib]){
            return 1;
        }
        else{
        if(findLoop(adj, visited, neib, node)){
            return 1;
        }

    }
}

    
    
    return 0;
}

bool isCycle(int v, vector<vector<int>>& edges) {
    vector<vector<int>>adj(v);
    vector<bool>visited(v,0);

    for(int i=0;i<edges.size();i++){
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for(int i=0;i<v;i++){
        if(!visited[i]){
            if( findLoop(adj,visited,i,-1)){
            return 1;
            }
        }
    }
    return 0;
}