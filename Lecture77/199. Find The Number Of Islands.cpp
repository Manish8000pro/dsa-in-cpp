// 199. Find The Number Of Islands
bool isValid(int i , int j, int r,int c){
    return i>=0 && i<r && j>=0 && j<c;
}

void DFS(vector<vector<char>>&grid,int i,int j){
    grid[i][j]='W';

    int row[8] = {0,0,1,1,1,-1,-1,-1};
    int col[8] = {1,-1,0,1,-1,0,1,-1};

    int r = grid.size();
    int c = grid[0].size();

    // I can go into 8 directions , follow the direction which has land 


    for(int k = 0;k<8;k++){
        if(isValid(i+row[k],j+col[k],r,c) && grid[i+row[k]][j+col[k]]=='L'){
           DFS(grid,i+row[k],j+col[k]);
        }
    }
}

int numIslands(vector<vector<char>>& grid) {
    int totalNumberOfIsland = 0;

    int r = grid.size();
    int c = grid[0].size();

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(grid[i][j]=='L'){
                DFS(grid,i,j);
                totalNumberOfIsland++;
            }
        }
    }
    return totalNumberOfIsland;
}
