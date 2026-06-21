// 208. Strongly Connected Components
void topSort(vector<vector<int>>&adj,int node,stack<int>&s,vector<bool>&visited){
    visited[node] = 1;
    
    for(auto neib: adj[node]){
        if(!visited[neib])
        topSort(adj,neib,s,visited);
    }

    s.push(node);
}

void DFS(vector<int>adj[],int node,vector<bool>&visited){
    visited[node] = 1;
    for(auto neib: adj[node]){
        if(!visited[neib])
        DFS(adj,neib,visited);
    }
}

int kosaraju(int V, vector<vector<int>>& adj) {
    //toplogocial sort using DFS 
    // 
    // 

    stack<int>s;
    vector<bool>visited(V,0);

    for(int i=0;i<V;i++){
        if(!visited[i])
        topSort(adj,i,s,visited);
    }

    vector<int>rAdj[V];
    for(int i=0;i<V;i++){
        for(int j=0;j<adj[i].size();j++){
            int u = i;
            int v = adj[i][j];

            rAdj[v].push_back(u);
        }
    }

    vector<bool>visit(V,0);
    int scc = 0;

    while(!s.empty()){
        if(!visit[s.top()]){
            DFS(rAdj,s.top(),visit);
            scc++;
        }
        s.pop();
    }

    return scc;
}