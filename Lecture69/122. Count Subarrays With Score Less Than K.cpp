// 122. Count Subarrays With Score Less Than K
long long countSubarrays(vector<int>& nums, long long k) {
    long long count = 0 ,sum=0,product;
    int left = 0 , right = 0,n = nums.size();

    while(right<n){
        sum+=nums[right];

        // multiplication ; sum*(right-left+1);
        product = sum*(right-left+1);

        while(product>=k){
            sum-=nums[left];
            left++;
            product = sum*(right-left+1);
        }
        
        count+=(right-left+1);
        right++;
    }
    return count;
}