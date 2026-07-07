// 74C. Fibonacci Number using bottom up approach
int fib(int n) {
    // Your code here
    vector<int>dp(n+1);

    if(n<=1)
    return n;

    // base case fill in DP 
    dp[0] = 0;
    dp[1] = 1;

    for(int i=2;i<=n;i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n];
}