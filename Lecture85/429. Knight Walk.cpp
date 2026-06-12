// 429. Knight Walk
class Solution {
  public:

  bool isValid(int i ,int j, int N){
    return i>=0 && i<N && j>=0 && j<N;
  }

    int minStepToReachTarget(vector<int>& KnightPos, vector<int>& TargetPos, int N) {
        // code here
        if(KnightPos[0]==TargetPos[0]&& KnightPos[1]==TargetPos[1])
        return 0;

        KnightPos[0]--;
        KnightPos[1]--;
        TargetPos[0]--;
        TargetPos[1]--;

        vector<vector<bool>>Visited(N,vector<bool>(N,0));
        // Initial position of Kinight , mark it visited

        Visited[KnightPos[0]][KnightPos[1]]=1;

        queue<pair<int,int>>q;
        q.push({KnightPos[0],KnightPos[1]});
        int totalStep = 0;

        while(!q.empty()){
            int size = q.size();

            totalStep++;

            while(size--){
                int i = q.front().first;
                int j = q.front().second;
                q.pop();

                int row[8] = {1,-1,1,-1,2,2,-2,-2};
                int col[8] = {2,2,-2,-2,-1,1,1,-1};

                for(int k=0;k<8;k++){
                    if(isValid(i+row[k],j+col[k],N)&&!Visited[i+row[k]][j+col[k]]){
                        if(i+row[k]== TargetPos[0]&& j+col[k]==TargetPos[1])
                        return totalStep;

                        Visited[i+row[k]][j+col[k]]=1;
                        q.push({i+row[k],j+col[k]});
                    }
                }
            }
        }
        return -1;
    }
};