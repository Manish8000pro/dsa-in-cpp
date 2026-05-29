 // 401. Undirected Graph Cycle
 // Function to detect cycle in an undirected graph.
bool isCycle(int v, vector<vector<int>>& edges) {
    vector<int>adj[v];

    for(auto edge: edges){
        adj[edge[0]].push_back(edge[1]);
        adj[edge[1]].push_back(edge[0]);
    }

    vector<bool>visited(v,0);

    for(int i=0;i<v;i++){
        if(!visited[i]){
            queue<pair<int ,int>>q;
            q.push({i,-1});
            visited[i]=1;

            while(!q.empty()){
                pair<int,int>element = q.front();
                q.pop();
                int node = element.first;
                int parent = element.second;

                for(int neib: adj[node]){
                    if(neib!=parent){
                        if(visited[neib]){
                            return 1;
                        }
                        else{
                            visited[neib]=1;
                            q.push({neib,node});
                        }
                    }
                }
            } 
        }

        
    }

    
    return 0;
}