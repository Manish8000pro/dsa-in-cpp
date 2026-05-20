 // 399. BFS of graph
 class Solution {
public:

    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        
        queue<int>q;
        vector<bool>visited(V,0);

        // push 0 into queue and mark its visit to 1
        q.push(0);
        visited[0] = 1;

        vector<int>result;

        while(!q.empty()){
            int node = q.front();
            result.push_back(node);
            q.pop();

            // Look at all the neighbour of this node
            // for(int i=0;i<adj[node].size();i++){
            //     int neighbour = adj[node][i];

            //     if(!visited[neighbour]){
            //         visited[neighbour] =1;
            //         q.push(neighbour);
            //     }
            // }

            for(int neighbour: adj[node]){
                if(!visited[neighbour]){
                    visited[neighbour] =1;
                    q.push(neighbour);
                }
            }
        }

        return result;
    }

};