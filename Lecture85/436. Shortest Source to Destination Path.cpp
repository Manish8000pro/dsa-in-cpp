// 436. Shortest Source to Destination Path
class Solution {
  public:

    bool isValid(int i,int j, int N, int M){
        return i>=0 && i<N && j>=0 && j<M;
    }

    int shortestDistance(int N, int M, vector<vector<int>> A, int X, int Y) {
        // code here
        // if source and destination is same 
        if(X==0&&Y==0)
        return 0;

        // if source value is zero and destination value is 0
        if(A[0][0]==0 || A[X][Y]==0){
            return -1;
        }

        queue<pair<int,int>>q;
        q.push({0,0});
        A[0][0]=0;

        int totalStep=0;

        while(!q.empty()){
            int size = q.size();
            totalStep++;

            while(size--){
                int i = q.front().first;
                int j = q.front().second;
                q.pop();

                // up , down , left , right 

                int row[4] = {1,-1,0,0};
                int col[4] = {0,0,1,-1};

                for(int k=0;k<4;k++){
                    if(isValid(i+row[k],j+col[k],N,M)&& A[i+row[k]][j+col[k]]){

                        if(i+row[k]==X && j+col[k]==Y)
                        return totalStep;

                        A[i+row[k]][j+col[k]] = 0;
                        q.push({i+row[k],j+col[k]});
                    }
                }
            }
        }

        return -1;
    }
};