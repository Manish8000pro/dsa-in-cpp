//535. Minimum Cost to Cut a Stick
// Recursive solution 
// this gives the runtime error because this is not Optimized solution 
class Solution {
public:
    int findMinCost(int start,int end,int rodStart,int rodEnd,vector<int>&cuts){
        if(start>end){
            return 0;
        }

        // try all the cuts 
        int result = INT_MAX;

        for(int k=start;k<=end;k++){
            // LEft side   Right side 
            int answer = rodEnd-rodStart + findMinCost(start,k-1,rodStart,cuts[k],cuts) + findMinCost(k-1,end,cuts[k],rodEnd,cuts);

            result = min(answer,result);
        }
        return result;
    }

    int minCost(int n, vector<int>& cuts) {
        // Your code here
        sort(cuts.begin(),cuts.end());

        return findMinCost(0,cuts.size()-1,0,n,cuts);
    }
};