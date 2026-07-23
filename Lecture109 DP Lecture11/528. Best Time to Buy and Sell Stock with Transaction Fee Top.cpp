//528. Best Time to Buy and Sell Stock with Transaction Fee
// Top Down approach 
class Solution {
public:
    int maximumProfit(int index,int buy,int n, int fee ,vector<int>&prices,vector<vector<int>>&dp){
        if(index==n)
        return 0;

        if(dp[index][buy]!=-1)
        return dp[index][buy];

        if(buy){
            return max(-prices[index]+maximumProfit(index+1,0,n,fee,prices,dp),maximumProfit(index+1,1,n,fee,prices,dp));
        }
        else{
            return max(prices[index]-fee+maximumProfit(index+1,1,n,fee,prices,dp),maximumProfit(index+1,0,n,fee,prices,dp));
        }
    }

    int maxProfit(vector<int>& prices, int fee) {
        // Your code here
        int n = prices.size();
        // index: 0 to n+1 
        // buy : 0 to 2;
        vector<vector<int>>dp(n+1,vector<int>(2,-1));

        return maximumProfit(0,1,n,fee,prices,dp);
    }
};