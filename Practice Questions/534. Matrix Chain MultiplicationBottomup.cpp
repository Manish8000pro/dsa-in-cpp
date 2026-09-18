//534. Matrix Chain Multiplication
// this is not have space optimize
// time complexity is o(n^3)
class Solution {
public:
    int matrixMultiplication(vector<int>& arr) {
        // Your code here

        int n = arr.size();

        vector<vector<int>>dp(n,vector<int>(n,0));

        // length = number of matrices in the interval

        for(int len = 2;len<=n-1;len++){
            for(int i=1;i+len-1<=n-1;i++){
                
                int j = i+len-1;

                dp[i][j] = INT_MAX;

                for(int k=i;k<j;k++){
                    int cost = dp[i][k]+dp[k+1][j]+arr[i-1]*arr[k]*arr[j];

                    dp[i][j] = min(dp[i][j],cost);
                }
            }
        }
        return dp[1][n-1];

    }
};