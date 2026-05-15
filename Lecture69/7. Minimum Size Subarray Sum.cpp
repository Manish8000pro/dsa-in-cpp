// 7. Minimum Size Subarray Sum 
int minSubArrayLen(int target, const vector<int>& nums) {
    int minWindowSize = nums.size()+1,n = nums.size(),left = 0,right = 0,sum = 0;

    while(right<n){
        sum+= nums[right];
        
        while(sum>=target){
            minWindowSize = min(minWindowSize,right-left+1);
            sum-=nums[left];
            left++;
        }
        right++;
        
    }
    return minWindowSize == n+1 ? 0: minWindowSize;
}