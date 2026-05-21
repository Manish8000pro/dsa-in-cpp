// 400. DFS of Graph
// Function to return a list containing the DFS traversal of the graph.
void DFS(vector<int>adj[],int node,vector<bool>&visited,vector<int>&result){
    visited[node]=1;
    result.push_back(node);

    for(int neib: adj[node]){
        if(!visited[neib]){
            DFS(adj,neib,visited,result);
        }
    }
}

vector<int> dfsOfGraph(int v, vector<int> adj[]) {
    vector<int>result;
    vector<bool>visited(v,0);

    DFS(adj,0,visited,result);

    return result;
}