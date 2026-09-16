//506. Army's Training
//Bottom up approach
class Solution {
public:
    int maximumPoints(vector<vector<int>>& points, int n) {
        // Your code here
        vector<vector<int>>dp(n,vector<int>(3));
        // day 0
        dp[0][0]=points[0][0];
        dp[0][1]=points[0][1];
        dp[0][2]=points[0][2]; 

        // remaining days 
        for(int day = 1;day<n;day++){
            // Todays = Running 
            dp[day][0] = points[day][0]+max(dp[day-1][1],dp[day-1][2]);
            // Todays = Combact
            dp[day][1] = points[day][1]+max(dp[day-1][0],dp[day-1][2]);
            // Today's = Learning
            dp[day][2] = points[day][2]+max(dp[day-1][0],dp[day-1][1]);
        }
        
        return max({dp[n-1][0],dp[n-1][1],dp[n-1][2]});
    }
};