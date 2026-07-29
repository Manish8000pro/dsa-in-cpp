//256. Longest Increasing Subsequence
int lengthOfLIS(vector<int>& nums) {
    int n =  nums.size();
    vector<int>LIS(n,1);

    int result = 1;

    for(int i=0;i<n;i++){
        for(int j = i-1;j>=0;j--){
            if(nums[j]<nums[i])
            LIS[i] = max(LIS[i],1+LIS[j]);
        }
        result = max(LIS[i],result);
    }
    return result;
}