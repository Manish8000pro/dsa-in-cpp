//251. Edit Distance
//Bottom up approach
// bottom Up
// m : m to 0 : i
// n : n to 0 : j

int minDistance(string word1, string word2) {
    int m = word1.size(),n = word2.size();
    vector<vector<int>>dp(m+1,vector<int>(n+1,0));

    // column Zero ko fill kr d0 
    for(int i=0;i<=m;i++){
        dp[i][0] = i;
    }

    // Row zero ko fill kr do 
    for(int j=0;j<=n;j++){
        dp[0][j] = j;
    }

    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(word1[i-1]==word2[j-1])
            dp[i][j] = dp[i-1][j-1];
            else
            dp[i][j] = 1+min( dp[i-1][j],min(dp[i][j-1],dp[i-1][j-1]));
        }
    }
    return dp[m][n];
}