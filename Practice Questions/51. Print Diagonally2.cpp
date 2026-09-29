// 51. Print Diagonally
vector<int> downwardDiagonal(int N, vector<vector<int>>& A) {
    vector<int>ans;

    for(int sum = 0;sum<=2*N-2;sum++){
        for(int row=0;row<N;row++){

            int col = sum-row;
            if(col>=0 && col<N){
                ans.push_back(A[row][col]);
            }
        }
    }
    return ans;
} 