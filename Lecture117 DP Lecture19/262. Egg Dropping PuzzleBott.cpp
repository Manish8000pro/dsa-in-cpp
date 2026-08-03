//262. Egg Dropping Puzzle
// bottom up approach with dp
int eggDrop(int n, int k) {
    vector<vector<int>>dp(n+1,vector<int>(k+1,0));

    for(int j=0;j<=k;j++){
        dp[1][j] = j;
    }

    for(int moves=1;moves<=k;moves++){
        for(int eggs=2;eggs<=n;eggs++){
            dp[eggs][moves] = 1+dp[eggs-1][moves-1]+dp[eggs][moves-1];
        }
        if(dp[n][moves]>=k)
        return moves;
    }
    return k;
}