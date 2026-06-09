//  428. Bellman-Ford
class Solution {
  public:
    vector<int> bellmanFord(int V, vector<vector<int>>& edges, int src) {
        // code here
        vector<int>dist(V,100000000);
        dist[src]=0;

        // relax all the edges n-1 time

        for(int i=0;i<V-1;i++){
            for(auto edge: edges){
                int u = edge[0];
                int v = edge[1];
                int wt = edge[2];

                if(dist[u]==100000000)
                continue;

                if(dist[v]>dist[u]+wt){
                    dist[v] = dist[u]+wt;
                }
            }
        }

        // 1 last time relax the edges, if dist valye change, answer is not possible

            for(auto edge: edges){
                int u = edge[0];
                int v = edge[1];
                int wt = edge[2];

                if(dist[u]==100000000)
                continue;

                if(dist[v]>dist[u]+wt){
                    vector<int>ans;
                    ans.push_back(-1);
                    return ans;
                }
            }

            return dist;
    }

};