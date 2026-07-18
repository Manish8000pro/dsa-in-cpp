//518. Coin Change II 
// Best optimize solution 
// TimeC O(n)
// space C. o(amount)
class Solution {
public:

    int change(int amount, vector<int>& coins) {
        // Your code here
        int n = coins.size();
        vector<int>curr(amount+1,0);

        curr[0] = 1;
        
        for(int i=1;i<=n;i++){
            for(int j=1;j<=amount;j++){
                if(j-coins[i-1]>=0)
                curr[j] = curr[j]+curr[j-coins[i-1]];
            }
        }
        return curr[amount];
    }
};