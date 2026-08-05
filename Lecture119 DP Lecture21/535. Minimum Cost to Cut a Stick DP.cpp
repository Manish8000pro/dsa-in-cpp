//535. Minimum Cost to Cut a Stick 
// solution with DP 
// Optimized solution wiht DP 
class Solution {
public:
    int findMinCost(int start,int end,vector<int>&cuts,vector<vector<int>>&dp){
        if(start+1 == end){
            return 0;
        }

        if(dp[start][end]!=-1){
            return dp[start][end];
        }

        // try all the cuts 
        int result = INT_MAX;

        for(int k=start+1;k<end;k++){
            // LEft side   Right side 
            int answer = cuts[end]-cuts[start] + findMinCost(start,k,cuts,dp) + findMinCost(k,end,cuts,dp);

            result = min(answer,result);
        }
        return dp[start][end]= result;
    }

    int minCost(int n, vector<int>& cuts) {
        // Your code here
        cuts.push_back(0);
        cuts.push_back(n);
        sort(cuts.begin(),cuts.end());

        vector<vector<int>>dp(cuts.size(),vector<int>(cuts.size(),-1));

        return findMinCost(0,cuts.size()-1,cuts,dp);
    }
};

