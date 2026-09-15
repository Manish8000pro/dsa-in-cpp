//506. Army's Training 
// space optimized 
// time complexity o(n)
// space complexity o(1);
class Solution {
public:
    int maximumPoints(vector<vector<int>>& points, int n) {
        // Your code here
        vector<vector<int>>dp(n,vector<int>(3));
        // day 0
        int running = points[0][0];
        int combact = points[0][1];
        int learning = points[0][2];

        // remaining days 
        for(int day = 1;day<n;day++){
            // Todays = Running 
            int newRunning = points[day][0]+max(combact,learning);
            // Todays = Combact
            int newCombact = points[day][1]+max(running,learning);
            // Today's = Learning
            int newLearning = points[day][2]+max(running,combact);
            running = newRunning;
            combact = newCombact;
            learning = newLearning;
        }
        
        return max({running,combact,learning});
    }
};