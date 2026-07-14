// space otimization 
// 513. Subset Sum Equal To K
class Solution {
public:

    bool subsetSumToK(int n, int k, vector<int>& arr) {
        // Your code here
        vector<int>prev(k+1,0); 

        prev[0]=1;

        if(arr[0]<=k)
        prev[arr[0]] = 1;
        // first row and first column fill kr dia h 

        for(int i=1;i<n;i++){
            vector<int>curr(k+1,0);
            curr[0] = 1;
            for(int j=1;j<=k;j++){
                if(j-arr[i]>=0)
                curr[j] = prev[j] || prev[j-arr[i]];
                else
                curr[j] = prev[j];
            }
            prev = curr;
        }
        return prev[k];
    }
};