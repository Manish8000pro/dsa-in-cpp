//251. Edit Distance
// space optimized
// bottom Up
// m : m to 0 : i
// n : n to 0 : j

int minDistance(string word1, string word2) {
    int m = word1.size(),n = word2.size();
    // vector<vector<int>>dp(m+1,vector<int>(n+1,0));
    vector<int>prev(n+1,0);

    // Row zero ko fill kr do 
    for(int j=0;j<=n;j++){
        prev[j] = j;
    }

    for(int i=1;i<=m;i++){
        vector<int>curr(n+1,0);
        curr[0] = i;
        for(int j=1;j<=n;j++){
            if(word1[i-1]==word2[j-1])
            curr[j] = prev[j-1];
            else
            curr[j] = 1+min( prev[j],min(curr[j-1],prev[j-1]));
        }
        prev = curr;
    }
    return prev[n];
}