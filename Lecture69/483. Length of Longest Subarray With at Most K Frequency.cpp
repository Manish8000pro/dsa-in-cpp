// 483. Length of Longest Subarray With at Most K Frequency
class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        // Code here
        int maxLength = 0, left = 0, right = 0, n = nums.size();

        unordered_map<int ,int>count;

        while(right<n){
            int number = nums[right];
            count[number]++;

            while(count[number]>k){
                count[nums[left]]--;
                left++;
            }
            maxLength = max(maxLength,right-left+1);
            right++;
        }
        return maxLength;
    }
};