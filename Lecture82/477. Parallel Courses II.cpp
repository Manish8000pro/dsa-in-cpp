 // 477. Parallel Courses II
 class Solution {
public:
    int minNumberOfSemesters(int n, vector<vector<int>>& relations, int k) {
        // code here
        // create adjancy list 

        vector<int>adj[n];
        vector<int>InDegree(n,0);

        for(auto edge: relations){
            int u = edge[0]-1;
            int v = edge[1]-1;

            adj[u].push_back(v);
            InDegree[v]++;

        }

        int totalSemestar = 0;
        // Khn's algorithm

        queue<int>q;

        for(int i=0;i<n;i++){
            if(InDegree[i]==0){
                q.push(i);
            }
        }

        while(!q.empty()){
            // queue: total Number of available course which we can do in this corrent semestar 
            // K : ar most k course you can do in the semestar 

            int totalCourses = q.size();
            totalCourses = min(totalCourses,k);
            totalSemestar++;

            while(totalCourses--){
                int node = q.front();
                q.pop();

                for(int neib: adj[node]){
                    InDegree[neib]--;
                    if(InDegree[neib]==0)
                    q.push(neib);
                }
            }
        }

        return totalSemestar;
    }
};