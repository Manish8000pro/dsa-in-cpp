//185. Course Schedule II
class Solution {
public:
    vector<int> findOrder(int n, vector<vector<int>>& prerequisites) {
        // Your code here
         // adjacenecy List create kjiye
        vector<int>adj[n];
        vector<int>InDegree(n,0);
        for(auto edge: prerequisites){
            int u = edge[0];
            int v = edge[1];
            adj[v].push_back(u);
            InDegree[u]++;
        }

        // Kahn's algorithm
        queue<int>q;
        // push all the node into the queue whose indegree is zero
        for(int i=0;i<n;i++){
            if(InDegree[i]==0){
                q.push(i);
            }
        }
        vector<int>order;

        while(!q.empty()){

            int node = q.front();
            q.pop();

            order.push_back(node);

            
            for(int neib: adj[node]){
                InDegree[neib]--;
                if(InDegree[neib]==0)
                q.push(neib);
            }
        }
        if(order.size()!=n)
        return {};

        return order;

    }
};