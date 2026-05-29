// 404. Covid Spread
class Solution {
  public:

    bool isValid(int i, int j, int r, int c){

        return i>=0 && i<r && j>=0 && j<c;
    }

    int helpaterp(vector<vector<int>> hospital) {
        // code here
        int timer = 0;

        int r = hospital.size();
        int c = hospital[0].size();

        queue<pair<int,int>>q;
        // row index, col index of covid patient
        // first push all the patient who have covide at 0 time:

        for(int i=0;i<r;i++)
        for(int j=0;j<c;j++){
            if(hospital[i][j]==2){
                q.push({i,j});
            }
        }


        while(!q.empty()){
            int currentPatient = q.size();
            timer++;

            while(currentPatient--){
                int i = q.front().first;
                int j = q.front().second;
                q.pop();
                
                int row[4] = {0,0,-1,1};
                int col[4] = {-1,1,0,0};
                 
                // i = 2 , j = 3 
                // (2,2) (2,4) (1,3) (3,3)
                // out of index toh nahi gaya

                for(int k=0;k<4;k++){
                    if(isValid(i+row[k],j+col[k],r,c) && hospital[i+row[k]][j+col[k]]==1){
                        hospital[i+row[k]][j+col[k]] = 2;
                        q.push({i+row[k],j+col[k]});
                    }
                }

                // left side wale ko covide dega(i,j-1)

                // if(hospital[i][j-1]==1){
                //     hospital[i][j-1] = 2;
                //     q.push({i,j-1});
                // }
                // // right side wale ko covid dega (i,j+1)
                // if(hospital[i][j+1]==1){
                //     hospital[i][j+1] = 2;
                //     q.push({i,j+1});
                // }
                // // Up side wale ko covide dega. (i-1,j)
                // if(hospital[i-1][j]==1){
                //     hospital[i-1][j] = 2;
                //     q.push({i-1,j});
                // }
                // //  down side wale ko covid dega (i+1,j)
                // if(hospital[i+1][j]==1){
                //     hospital[i+1][j] = 2;
                //     q.push({i+1,j});
                // }
            }
        }



        // at the last check if any patient exist who is not effected by covid: 1

        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(hospital[i][j]==1){
                    return -1;
                }
            }
        }


        return timer==0 ? timer: timer-1;



    }
};