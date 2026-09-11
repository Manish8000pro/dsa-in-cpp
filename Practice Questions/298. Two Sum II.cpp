//298. Two Sum II
// this is the brute force approach
// This approach gives the TLE On LeetCode
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //code here
        for(int i = 0;i<nums.size();i++){
            for(int j = i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    return {i+1,j+1};
                }
            }
        }
        return {};
    }
}; 