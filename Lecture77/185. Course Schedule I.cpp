 // 185. Course Schedule II
 class Solution {
public:

    vector<int> findOrder(int n, vector<vector<int>>& prerequisites) {

        vector<vector<int>> adj(n);
        vector<int> indegree(n,0);

        for(auto edge : prerequisites){

            int u = edge[1];
            int v = edge[0];

            adj[u].push_back(v);
            indegree[v]++;
        }


        queue<int> q;

        for(int i=0;i<n;i++){

            if(indegree[i]==0){
                q.push(i);
            }
        }


        vector<int> result;


        while(!q.empty()){

            int node = q.front();
            q.pop();

            result.push_back(node);


            for(int neighbour : adj[node]){

                indegree[neighbour]--;

                if(indegree[neighbour]==0){
                    q.push(neighbour);
                }
            }
        }


        // cycle present
        if(result.size()!=n){
            return {};
        }


        return result;
    }
};