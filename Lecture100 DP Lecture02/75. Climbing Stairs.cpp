//75. Climbing Stairs
int climbStairs(int n) {
    // Your code here

	// if(n<=2){
	// 	return n;
	// }

	// return climbStairs(n-1)+climbStairs(n-2);

    //Using DP 
    if(n<=2)
    return n;
    
    vector<int>dp(n+1);
    dp[1]=1;
    dp[2] = 2;

   

    for(int i=3;i<=n;i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n];


}

//-----------------------------------------------------------
// 2nd solution using DP
int climb(int n,vector<int>&dp){
    if(n<=2)
    return n;

    // Base case ko handle krte h 
    if(dp[n]!=-1){
        return n;
    }

    return dp[n] = climb(n-1,dp)+climb(n-2,dp);
}

int climbStairs(int n) {
    // Your code here
    if(n<=2)
    return n;

    vector<int>dp(n+1,-1);
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 2;
    for(int i=3;i<=n;i++){
        dp[i] = dp[i-1]+dp[i-2];
    }

    return dp[n];
}