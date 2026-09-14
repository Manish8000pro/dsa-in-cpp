//506. Army's Training
//Time complexity O(2^n);
// space complexity o(n);
// This gives the TLE becasuse This is not Optimized solution
class Solution {
public:
    int solve(int day,int last,vector<vector<int>>&points,int n){
        // All days completed 
        if(day==n){
            return 0;
        }

        int ans = 0;
        // try all 3 activites
        for(int activity = 0;activity<3;activity++){
            
            // cannot repeat the last activity 
            if(activity!=last){
                int score = points[day][activity]+solve(day+1,activity,points,n);

                ans = max(ans,score);
            }
        }
        return ans;
    }

    int maximumPoints(vector<vector<int>>& points, int n) {
        // Your code here
        return solve(0,3,points,n);
    }
};