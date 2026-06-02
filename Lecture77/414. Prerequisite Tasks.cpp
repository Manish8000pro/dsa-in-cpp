//414. Prerequisite Tasks
class Solution {
  public:
    bool isPossible(int N, int P, vector<pair<int, int>>& prerequisites) {
        // code here
         // adjacency List create karo
        vector<int>adj[N];
        vector<int>InDegree(N,0);

        for(auto p: prerequisites){
            int v = p.first;
            int u = p.second;
            adj[u].push_back(v);
            InDegree[v]++;
        }

        queue<int>q;
        int totalTaskComplete = 0;
        for(int i=0;i<N;i++){
            if(InDegree[i]==0){
                q.push(i);
            }
        }

        while(!q.empty()){
            int node = q.front();
            q.pop();
            totalTaskComplete++;

            for(int neib: adj[node]){
                InDegree[neib]--;
                if(InDegree[neib]==0){
                    q.push(neib);
                }
            }
        }

        
        return totalTaskComplete==N;

    }
}; 