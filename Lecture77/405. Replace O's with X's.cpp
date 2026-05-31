//405. Replace O's with X's
class Solution {
  public:

  bool isValid(int i, int j, int r, int c ){
    return i>=0 && i<r && j>=0 && j<c;
  }

  void DFS(vector<vector<char>>& grid,int i , int j){
    grid[i][j] = 'D';

    // look at the neighbour who are o and conver into the "D"

    int row[4] = {0,0,1,-1};
    int col[4] = {1,-1,0,0};

    int r = grid.size();
    int c = grid[0].size();

    for(int k=0;k<4;k++){
        if(isValid(i+row[k],j+col[k],r,c)&& grid[i+row[k]][j+col[k]]=='O')
        DFS(grid,i+row[k],j+col[k]);
    }
  }

    vector<vector<char>> fill(vector<vector<char>>& grid) {
        // code here
        int r = grid.size();
        int c = grid[0].size();

        // left side traverse kro 

        for(int i=0;i<r;i++){
            if(grid[i][0]=='O')
            DFS(grid,i,0);
        }

        // bottom side ko traverse kro 
        for(int j=0;j<c;j++){
            if(grid[r-1][j]=='O')
            DFS(grid,r-1,j);
        }

        // righe side ko traverse kro 

        for(int i=0;i<r;i++){
            if(grid[i][c-1]=='O')
            DFS(grid,i,c-1);
        }

        // top side ko traverse kro 

        for(int j=0;j<c;j++){
            if(grid[0][j]=='O')
            DFS(grid,0,j);
        }

        // change D to O and change O to X 
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(grid[i][j]=='D')
                grid[i][j]='O';
                else
                grid[i][j]='X';
            }
        }

        return grid;
    }
};