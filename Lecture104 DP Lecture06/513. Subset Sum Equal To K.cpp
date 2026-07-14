// 513. Subset Sum Equal To K
class Solution {
public:
    bool findSubset(int index ,int sum,vector<int>&arr,vector<vector<int>>&dp){

        if(sum==0)
        return 1;

        if(sum<0 || index<0)
        return 0;

        if(dp[index][sum]!=-1){
            return dp[index][sum];
        }
        
        return dp[index][sum] = findSubset(index-1,sum,arr,dp) || findSubset(index-1,sum-arr[index],arr,dp);
    }

    bool subsetSumToK(int n, int k, vector<int>& arr) {
        // Your code here
        vector<vector<int>>dp(n,vector<int>(k+1,0));
        
        //j=0 value kr do 

        for(int i=0;i<n;i++)
        dp[i][0] = 1;

        if(arr[0]<=k)
        dp[0][arr[0]]=1;
        // first row and first column fill kr dia h 

        for(int i=1;i<n;i++){
            for(int j=1;j<=k;j++){
                if(j-arr[i]>=0)
                dp[i][j] = dp[i-1][j] || dp[i-1][j-arr[i]];
                else
                dp[i][j] = dp[i-1][j];
            }
        }
        return dp[n-1][k];
    }
};