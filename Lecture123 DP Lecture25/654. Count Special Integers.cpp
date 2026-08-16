//654. Count Special Integers 
654. Count Special Integers 
// solution 
class Solution {
public:

    int dp[10][2][2][1024];

    int solve(int index,bool tight,bool started,int mask,string &num){
        if(index==num.size()){
            if(!started)
            return 0;

            return 1;
        }

        if(dp[index][tight][started][mask]!=-1)
        return dp[index][tight][started][mask];

        int limit = tight ? num[index]-'0':9;

        int answer = 0;


        for(int digit = 0;digit<=limit;digit++){
            int newTight = tight&&(digit==limit);

            if(!started&&digit==0){
                answer+=solve(index+1,newTight,false,mask,num);
            }
            else{
                if(mask&(1<<digit))
                continue;

                answer+=solve(index+1,newTight,true,mask|(1<<digit),num);
            }
        }

        return dp[index][tight][started][mask]= answer;

    }

    int countSpecialNumbers(int n) {
        // Your code here
        string num = to_string(n);

        memset(dp,-1,sizeof(dp));

        return solve(0,true,false,0,num);
    }
};