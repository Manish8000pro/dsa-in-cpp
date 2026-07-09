// 508. Maximum Sum of Non-Adjacent Elements
// Optimized solution 
// Time comp. o(n);
// space comp. o(1);
class Solution {
public:
    int rob(vector<int>& nums) {
        // Your code here
        int n = nums.size();

        if(n==1)
        return nums[0];

        if(n==2)
        return max(nums[0],nums[1]);

        vector<int>dp(3,0);

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