// 248. Coin Change 
// recursive approach
class Solution {
public:
    int findMinCoins(int n,int amount,vector<int>&coins){
        if(amount==0)
        return 0;

        if(n==0 || amount<0)
        return 1e9;

        return min(findMinCoins(n-1,amount,coins), 1+findMinCoins(n,amount-coins[n-1],coins));
    }

    int coinChange(vector<int>& coins, int amount) {
        // Your code here
        int n = coins.size();

        int answer = findMinCoins(n,amount,coins);
        return answer>=1e9 ? -1 : answer;
    }
};