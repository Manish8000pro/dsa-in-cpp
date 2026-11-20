//191. Find If Path Exists In Graph
// Time Complexity: O(V + E) where V is the number of vertices and E is the number of edges in the graph.
bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
    if (source == destination)
    return true;

    vector<vector<int>> adj(n);
    for(auto& edge : edges){
        adj[edge[0]].push_back(edge[1]);
        adj[edge[1]].push_back(edge[0]);
    }

    vector<bool> visited(n,false);
    queue<int>q;
    q.push(source);
    visited[source] = true;

    while(!q.empty()) {
        int curr = q.front();
        q.pop();
        if(curr == destination)
        return true;

        for(int neighbour : adj[curr]) {
            if(!visited[neighbour]){
                visited[neighbour] = true;
                q.push(neighbour);
            }
        }
    }
    return false;
}