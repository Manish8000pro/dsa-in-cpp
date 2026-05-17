 // 485. Subarrays with K Different Integers
class Solution {
public:
    int atleast(vector<int>&nums,int k){
            unordered_map<int,int>count;
            int left = 0,right = 0,n=nums.size(),result = 0;

            while(right<n){
                count[nums[right]]++;

                if(count[nums[right]]==1){
                    k--;
                }
                while(k==0){
                    result+=(n-right);
                    count[nums[left]]--;

                    if(count[nums[left]]==0){
                        k++;
                    }
                    left++;
                }
                right++;
            }
            return result;
        }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        // Code here
        return atleast(nums,k) - atleast(nums,k+1);
    }
};