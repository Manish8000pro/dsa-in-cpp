//266. Maximum path sum in matrix
int findMaximumPathSum(vector<vector<int>>& mat) {
    int n = mat.size();
    int m = mat[0].size();
        // down, left dignol, rightDignol

        for(int i=n-2;i>=0;i--){
            for(int j=0;j<m;j++){
                int maxChoice = mat[i+1][j];
                if(j>0) maxChoice = max(maxChoice, mat[i+1][j-1]);
                if(j<m-1) maxChoice = max(maxChoice, mat[i+1][j+1]);

                mat[i][j]+=maxChoice;
            }
        }

        // first row pe check karo, which is the maximum value
        int result = INT_MIN;
        for(int j=0;j<m;j++){
            result = max(result, mat[0][j]);
        }

        return result;
}