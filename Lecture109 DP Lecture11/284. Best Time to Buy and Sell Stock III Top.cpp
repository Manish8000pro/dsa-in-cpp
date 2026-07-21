//284. Best Time to Buy and Sell Stock III
// solution with dp and Solved by the Top Down app.
int maximumProfit(int index,int buy,int transactions,int n,vector<int>&prices,vector<vector<vector<int>>>&dp){
    if(transactions == 0 || index == n){
        return 0;
    }

    if(dp[index][buy][transactions]!=-1)
    return dp[index][buy][transactions];
    

    if(buy){
        // Either i can buy the stock or i will not buy the stock 

        return dp[index][buy][transactions] = max(-prices[index]+maximumProfit(index+1,0,transactions,n,prices,dp),maximumProfit(index+1,1,transactions,n,prices,dp));
    }
    else{
        // Either I can sell the stock or I will not sell the stock 
        return dp[index][buy][transactions] = max(prices[index]+maximumProfit(index+1,1,transactions-1,n,prices,dp),maximumProfit(index+1,0,transactions,n,prices,dp));
    }
}

// index = 0 to n (n+1)
// buy= 0 to 1 (2)
// transaction: 2 1 0 , (3)

int maxProfit(vector<int>& prices) {
    int n = prices.size();
    vector<vector<vector<int>>>dp(n+1,vector<vector<int>>(2,vector<int>(3,-1)));
    return maximumProfit(0,1,2,n,prices,dp);
}
