// 437.Find wheather path exist 
// this is solution but this gives the runtime error
// Stack overflow condition face because using DFS (depth first search)
class Solution {
  public:

    int n;

    int di[4] = {-1,1,0,0};
    int dj[4] = {0,0,-1,1};

    bool dfs(int i,int j,vector<vector<int>>&grid,vector<vector<bool>>&visited){
        // outside

        if(i<0 || i>=n || j<0 || j>=n)
        return false;

        // wall 
        if(grid[i][j]==0)
        return false;

        // Destination

        if(grid[i][j]==2)
        return true;

        visited[i][j]=true;

        for(int k = 0;k<4;k++){
            int ni = i+di[k];
            int nj = j+dj[k];

            if(dfs(ni,nj,grid,visited))
            return true;
        }
        return false;
    }

    bool is_Possible(vector<vector<int>>& grid) {
        // code here
        n = grid.size();

        // find where (source) is 

        int si = -1;
        int sj = -1;

        // search every cell 
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    si = i;
                    sj = j;
                }
            }
        }

        vector<vector<bool>>visited(n,vector<bool>(n,false));
        return dfs(si,sj,grid,visited);

    }
};

//-----------------------------------------------------------------------------------------
// Optimized code 
// this is the BFS solution 
//✅ No recursion depth issues → avoids stack overflow.
// ✅ Scalable → works even for very large grids (like 1000×1000).
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
            auto [i,j] = q.front();
            q.pop();

            if(grid[i][j] == 2) return true; // destination found

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
