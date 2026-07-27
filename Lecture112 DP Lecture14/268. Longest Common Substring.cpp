//268. Longest Common Substring
int LCSubStr(int m,int n,int &result,string &s1,string &s2,vector<vector<int>>&dp){
    if(m==0 || n==0)
    return 0;

    if(dp[m][n]!=-1)
    return dp[m][n];

    int answer = 0;
    if(s1[m-1]==s2[n-1]){
        answer = 1+LCSubStr(m-1,n-1,result,s1,s2,dp);
        result = max(answer,result);
    }

    LCSubStr(m-1,n,result,s1,s2,dp);
    LCSubStr(m,n-1,result,s1,s2,dp);

    return dp[m][n] = answer;
}

int longestCommonSubstr(string s1, string s2) {

    int m = s1.size(),n = s2.size(),result = 0;
    vector<vector<int>>dp(m+1,vector<int>(n+1,-1));

    LCSubStr(m,n,result,s1,s2,dp);

    return result;
}