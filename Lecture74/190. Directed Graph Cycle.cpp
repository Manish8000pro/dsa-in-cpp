//190. Directed Graph Cycle
bool isCyclic(int V, vector<vector<int>>& edges) {
    // kahn's algorithm 
        vector<int>adj[V];
        vector<int>inDegree(V,0);

        // find the inDegree of each node

        for(auto edge: edges){
            // u --> v
            // edge[0]-->edge[1]

            int u = edge[0];
            int V = edge[1];
            adj[u].push_back(V);
            inDegree[V]++;
        }
        queue<int>q; 

        // put all thos node into the queue whose inDegree is Zero

        for(int i=0;i<V;i++){
            if(!inDegree[i]){
                q.push(i);
            }
        }

        vector<int>result; 

        while(!q.empty()){
            int node = q.front();
            q.pop();
            result.push_back(node);

            for(int neib: adj[node]){
                inDegree[neib]--;
                if(!inDegree[neib]){
                    q.push(neib);
                }
            }
        }

        return result.size()!=V ? 1:0;
} 