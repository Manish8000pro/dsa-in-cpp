//382. Merge k Sorted Arrays
// this gives the Time Limit exceed 
class Solution {
public:
    // Function to merge k sorted arrays.
    vector<int> mergeKArrays(vector<vector<int>> mat, int K) {
        // Your code here
        int n = mat.size();

        priority_queue<vector<int>,vector<vector<int>>,greater<vector<int>>>pq;

        vector<int>answer;

        // put the first element every row

        for(int row = 0;row<n;row+1){
            if(!mat[row].empty()){
                pq.push({mat[row][0],row,0});
            }
        }

        while(!pq.empty()){
            // get smallest element
            vector<int>current = pq.top();
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