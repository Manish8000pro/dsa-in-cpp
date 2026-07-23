//528. Best Time to Buy and Sell Stock with Transaction Fee
// Bottom up approach
class Solution {
public:

    int maxProfit(vector<int>& prices, int fee) {
        // Your code here
        int n = prices.size();
        // index: 0 to n+1 
        // buy : 0 to 2;
        vector<vector<int>>dp(n+1,vector<int>(2,0));

        for(int i=n-1;i>=0;i--){
            for(int j=0;j<=1;j++){
                if(j){
                    dp[i][j] = max(-prices[i]+dp[i+1][0],dp[i+1][1]);
                }
                else{
                    dp[i][j] = max(prices[i]-fee+dp[i+1][1],dp[i+1][0]);
                }
            }
        }

        return dp[0][1];
    }
};