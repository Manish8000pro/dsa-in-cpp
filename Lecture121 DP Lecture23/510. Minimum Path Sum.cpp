//510. Minimum Path Sum
class Solution {
public:
    int n,m;

    int solve(int i, int j ,vector<vector<int>>& grid){

        // out of grid
        if(i>=n || j>=m)
        return INT_MAX;

        // reached destination 
        if(i==n-1 && j==m-1)
        return grid[i][j];

        // two choices
        int down = solve(i+1,j,grid);
        int right = solve(i,j+1,grid);

        // current cell + minimum of both choices 
        return grid[i][j] + min(down,right);
    }

    int minPathSum(vector<vector<int>>& grid) {
        // Your code here
        n  = grid.size();
        m = grid[0].size();
        

        return solve(0,0,grid);
    }
}; 