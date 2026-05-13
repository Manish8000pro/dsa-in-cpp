// 481. Subarray Sums Divisible by K
class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        // Code here
        unordered_map<int,int>count;
        count[0] = 1;

        int prefixSum = 0, result = 0;
        int rem;

        for(int value: nums){
            prefixSum+=value;
            rem = ((prefixSum%k)+k)%k;
            result+=count[rem];
            count[rem]++;
        }
        return result;
    }
};