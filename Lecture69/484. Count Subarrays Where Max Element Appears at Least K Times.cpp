//484. Count Subarrays Where Max Element Appears at Least K Times
class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        // Code here
        int maxValue = nums[0];
        for(int val: nums){
            maxValue = max(maxValue,val);
        }
        int n = nums.size(),countMaxValue = 0, left = 0, right=0,result = 0;

        while(right<n){
            if(maxValue==nums[right]){
                countMaxValue++;
            }
            // decrease the window size

            while(countMaxValue>=k){
                result += (n-right);

                // decrease the window size 
                if(maxValue==nums[left]){
                    countMaxValue--;
                }
                left++;
            }
            right++;
        }
        return result;
    }
};