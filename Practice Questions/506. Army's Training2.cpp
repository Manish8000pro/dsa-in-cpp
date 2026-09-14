//506. Army's Training 
// Solving with DP
// Time complexity o(n*3*4) = o(n)
// space complexity o(n)
class Solution {
public:
    int solve(int day,int last,vector<vector<int>>&points,int n,vector<vector<int>>&dp){
        // All days completed 
        if(day==n){
            return 0;
        }

        // Already calculated
        if(dp[day][last]!=-1)
        return dp[day][last];

        int ans = 0;
        // try all 3 activites
        for(int activity = 0;activity<3;activity++){
            
            // cannot repeat the last activity 
            if(activity!=last){
                int score = points[day][activity]+solve(day+1,activity,points,n,dp);

                ans = max(ans,score);
            }
        }
        return dp[day][last] = ans;
    }

    int maximumPoints(vector<vector<int>>& points, int n) {
        // Your code here
        vector<vector<int>>dp(n,vector<int>(4,-1));
        return solve(0,3,points,n,dp);
    }
};