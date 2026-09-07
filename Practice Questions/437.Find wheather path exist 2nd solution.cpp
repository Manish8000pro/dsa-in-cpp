//437.Find wheather path exist 
// this is the completely optimized solution
class Solution {
public:
    int n;
    int di[4] = {-1,1,0,0};
    int dj[4] = {0,0,-1,1};

    bool is_Possible(vector<vector<int>>& grid) {
        n = grid.size();

        int si = -1, sj = -1;
        // find source
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    si = i;
                    sj = j;
                }
            }
        }

        vector<vector<bool>> visited(n, vector<bool>(n,false));
        queue<pair<int,int>> q;
        q.push({si,sj});
        visited[si][sj] = true;

        while(!q.empty()){
            auto current = q.front();
            q.pop();
            
            int i = current.first;
            int j = current.second;

            if(grid[i][j] == 2) 
            return true; 
            // destination found

            for(int k=0;k<4;k++){
                int ni = i+di[k];
                int nj = j+dj[k];

                if(ni>=0 && ni<n && nj>=0 && nj<n && 
                   grid[ni][nj] != 0 && !visited[ni][nj]){
                    visited[ni][nj] = true;
                    q.push({ni,nj});
                }
            }
        }
        return false;
    }
};
