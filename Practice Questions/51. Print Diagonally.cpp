//51. Print Diagonally
vector<int> downwardDiagonal(int N, vector<vector<int>>& A) {
        vector<int> ans;

        // There are 2*N - 1 anti-diagonals
        for(int sum = 0; sum <= 2*N - 2; sum++) {

            // Start row
            int row = max(0, sum - (N - 1));

            // Traverse this diagonal
            while(row < N) {

                int col = sum - row;

                if(col < 0 || col >= N)
                    break;

                ans.push_back(A[row][col]);

                row++;
            }
        }
        return ans;
} 