// 541. Perfect Squares 
class Solution {
public:
    int numSquares(int n) {
        // Your code here
        if(n<=3)
        return n;

        vector<int>MinimumPerfectSqure(n+1,INT_MAX);
        MinimumPerfectSqure[0] = 0;
        MinimumPerfectSqure[1] = 1;
        MinimumPerfectSqure[2] = 2;
        MinimumPerfectSqure[3] = 3;

        for(int i=4;i<=n;i++){
            for(int j=1;j*j<=i;j++){
                MinimumPerfectSqure[i] = min(MinimumPerfectSqure[i],1+MinimumPerfectSqure[i-j*j]);
            }
        }
        return MinimumPerfectSqure[n];
    }
};