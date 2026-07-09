// 460. House Robber with space otmization 
// Time complixity = O(n);
// sapce complexity = o(1);
class Solution {
public:
    int rob(vector<int>& nums) {
        // code here
        int n = nums.size();

        if(n==1)
        return nums[0];

        if(n==2){
            return max(nums[0],nums[1]);
        }
        
        vector<int>dp(3,0);

        // return maxAmountRob(n-1,nums,dp);
        // bottom up 
        dp[1] = nums[0];
        dp[2] = max(nums[0],nums[1]);


        for(int i=2;i<n;i++){
            dp[0] = dp[1];
            dp[1] = dp[2];
            dp[2] = max(nums[i]+dp[0],dp[1]);
        }
        return dp[2];
    }
};