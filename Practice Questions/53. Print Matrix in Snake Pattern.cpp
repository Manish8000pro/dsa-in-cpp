// 53. Print Matrix in Snake Pattern
vector<int> snakePattern(vector<vector<int>>& mat) {
    int n = mat.size();
    vector<int>ans;

    for(int i=0;i<n;i++){

        // even row return left to right
        if(i%2==0){
            for(int j=0;j<n;j++){
                ans.push_back(mat[i][j]);
            }
            
        }else{
                // odd row return right to left
                for(int j=n-1;j>=0;j--){
                    ans.push_back(mat[i][j]);
                }
            }
    }
    return ans;
}