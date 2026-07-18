//518. Coin Change II
// Bottom up approach
class Solution {
public:

    int change(int amount, vector<int>& coins) {
        // Your code here
        int n = coins.size();

        vector<vector<int>>dp(n+1,vector<int>(amount+1,0));

        // first column ko fill kr do
        for(int i=0;i<=n;i++){
            dp[i][0] = 1;
        }
        // 0th row and 0th colum ko fill kr liya h INitilize kr liya h 
        
        for(int i=1;i<=n;i++){
            for(int j=1;j<=amount;j++){
                if(j-coins[i-1]>=0)
                dp[i][j] = dp[i-1][j]+dp[i][j-coins[i-1]];
                else
                dp[i][j] = dp[i-1][j];
            }
        }
        return dp[n][amount];
    }
};