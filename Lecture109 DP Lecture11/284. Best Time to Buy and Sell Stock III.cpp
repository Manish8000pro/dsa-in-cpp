//284. Best Time to Buy and Sell Stock III 
// Space Optimization 
// index = 0 to n (n+1) : i 0 to n
// buy= 0 to 1 (2): j: 0 to 1
// transaction: 2 1 0 , (3): k: 0to 2;
// j=1 : dp[i][j][k] = max(-prices[i]+dp[i+1][0][k],dp[i+1][1][k]);
// j=0 : dp[i][j][k] = max(prices[i]+dp[i+1][1][k-1],dp[i+1][0][k])
// Initilization:
// k ==0, sabko zero bana do udhr
// i == n, sabko zero bana do udhr 

int maxProfit(vector<int>& prices) {
    int n = prices.size();
    vector<vector<int>>prev(2,vector<int>(3,0));
    
    for(int i=n-1;i>=0;i--){
        vector<vector<int>>curr(2,vector<int>(3,0));
        for(int j=0;j<2;j++){
            for(int k=1;k<=2;k++){
                if(j==1){
                    curr[j][k] = max(-prices[i]+prev[0][k],prev[1][k]);
                }
                else{
                    curr[j][k] = max(prices[i]+prev[1][k-1],prev[0][k]);
                }
            }
        }
        prev = curr;
    }
    return prev[1][2];
}
