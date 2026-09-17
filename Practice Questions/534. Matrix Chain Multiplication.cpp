//534. Matrix Chain Multiplication  
// This gives  Time limitexceed 
class Solution {
public:
    int solve(int i ,int j ,vector<int>&arr){
        // only one matrix
        if(i==j)
        return 0;

        int ans = INT_MAX;

        // Try every possible partition 
        for(int k=i;k<j;k++){
            int cost = (solve(i,k,arr)+solve(k+1,j,arr)+arr[i-1]*arr[k]*arr[j]);

            ans = min(ans,cost);
        }
        return ans;
    }

    int matrixMultiplication(vector<int>& arr) {
        // Your code here
        int n = arr.size();
        return solve(1,n-1,arr);
    }
};