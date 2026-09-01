//Merge k Sorted Arrays
// This problme solved on GFG
// GFG solution 
class Solution {
  public:
    vector<int> mergeArrays(vector<vector<int>> &mat) {
        // Code here
        int n = mat.size();

        priority_queue<array<int,3>,vector<array<int,3>>,greater<array<int,3>>> pq;

        vector<int>answer;

        // put the first element every row

        for(int row = 0;row<n;row++){
            if(!mat[row].empty()){
                pq.push({mat[row][0],row,0});
            }
        }

        while(!pq.empty()){
            // get smallest element
            auto current = pq.top();
            pq.pop();

            int value = current[0];
            int row = current[1];
            int col = current[2];

            answer.push_back(value);

            // put next element from same row 
            if(col+1<mat[row].size()){
                pq.push({
                    mat[row][col+1],row,col+1
                });
            }
        }
        return answer;
    }
};