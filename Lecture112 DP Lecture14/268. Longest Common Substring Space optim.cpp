//268. Longest Common Substring Space optimization 
// TOp soultion of LCSubstring
int longestCommonSubstr(string s1, string s2) {

    int m = s1.size(),n = s2.size(),result = 0;
    vector<vector<int>>dp(m+1,vector<int>(n+1,0));

    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            int answer = 0;
            if(s1[i-1]==s2[j-1]){
            answer = 1+dp[i-1][j-1];
            result = max(answer,result);
            }
            dp[i][j] = answer;
        }
        
    }

    return result;
}