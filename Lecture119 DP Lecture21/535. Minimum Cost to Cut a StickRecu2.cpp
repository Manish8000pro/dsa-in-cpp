//535. Minimum Cost to Cut a Stick 
// second recursive approach
class Solution {
public:
    int findMinCost(int start,int end,vector<int>&cuts){
        if(start+1 == end){
            return 0;
        }

        // try all the cuts 
        int result = INT_MAX;

        for(int k=start+1;k<end;k++){
            // LEft side   Right side 
            int answer = cuts[end]-cuts[start] + findMinCost(start,k,cuts) + findMinCost(k,end,cuts);

            result = min(answer,result);
        }
        return result;
    }

    int minCost(int n, vector<int>& cuts) {
        // Your code here
        cuts.push_back(0);
        cuts.push_back(n);
        sort(cuts.begin(),cuts.end());

        return findMinCost(0,cuts.size()-1,cuts);
    }
};

