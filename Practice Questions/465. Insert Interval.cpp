//465. Insert Interval
class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        // code here
        vector<vector<int>>ans;

        for(auto interval: intervals){
            // before newinterval 
            if(interval[1]<newInterval[0]){
                ans.push_back(interval);
            }
            //after newInterval
            else if(interval[0]>newInterval[1]){
                ans.push_back(newInterval);
                newInterval = interval;
            }
            // Overlap
            else{
                newInterval[0] = min(interval[0],newInterval[0]);
                newInterval[1] = max(interval[1],newInterval[1]);
            }
        }
        ans.push_back(newInterval);
        
        return ans;
        
    }
};