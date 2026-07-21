//284. Best Time to Buy and Sell Stock III 
// recursive approach
int maximumProfit(int index,int buy,int transactions,int n,vector<int>&prices){
    if(transactions == 0 || index == n){
        return 0;
    }
    

    if(buy){
        // Either i can buy the stock or i will not buy the stock 

        return max(-prices[index]+maximumProfit(index+1,0,transactions,n,prices),maximumProfit(index+1,1,transactions,n,prices));
    }
    else{
        // Either I can sell the stock or I will not sell the stock 
        return max(prices[index]+maximumProfit(index+1,1,transactions-1,n,prices),maximumProfit(index+1,0,transactions,n,prices));
    }
}

int maxProfit(vector<int>& prices) {
    int n = prices.size();
    return maximumProfit(0,1,2,n,prices);
}
