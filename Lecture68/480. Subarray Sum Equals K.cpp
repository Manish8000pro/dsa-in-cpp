// 480. Subarray Sum Equals K
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        // Code here
        unordered_map<int,int>count;
        int prefixSum = 0;
        int result  = 0;
        count[0] = 1;


        for(int value: nums){
            prefixSum+=value;


            result+=count[prefixSum-k];
            count[prefixSum]++;
        }
        return result;
    }
};