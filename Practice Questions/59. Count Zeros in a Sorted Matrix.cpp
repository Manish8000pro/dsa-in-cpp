//59. Count Zeros in a Sorted Matrix
int countZeroes(const vector<vector<int>>& mat) {
    int n  = mat.size();
    int count =0;

    for(int i=0;i<n;i++){
        for(int j=0;j<mat[i].size();j++)
        if(mat[i][j]==0)
        count++;
        
    }
    return count;
}