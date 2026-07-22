//285. Best Time to Buy and Sell Stock IV
// recursive approach
int maximumProfit(int index, int buy, int transaction, int n, vector<int>&prices,vector<vector<vector<int>>>&dp){

    if(transaction==0 || index==n){
        return 0;
    };

   if(dp[index][buy][transaction]!=-1)
   return dp[index][buy][transaction];

    //
    if(buy){
        
        // Either I can buy the stock or I will not buy the stock

    return dp[index][buy][transaction] =  max( -prices[index]+maximumProfit(index+1,0,transaction,n,prices,dp),
        maximumProfit(index+1,1,transaction,n,prices,dp));

    }
    else{
         
         // Eithr I can sell the stock today or I will sell the stock today

         return dp[index][buy][transaction]=  max( prices[index]+maximumProfit(index+1,1,transaction-1,n,prices,dp),
        maximumProfit(index+1,0,transaction,n,prices,dp));

    }
}

int maxProfit(int transaction, vector<int>& prices) {
     int n = prices.size();
    vector<vector<vector<int>>>dp(n+1,vector<vector<int>>(2,vector<int>(transaction+1,-1)));

    return maximumProfit(0,1,transaction,n,prices,dp);
}