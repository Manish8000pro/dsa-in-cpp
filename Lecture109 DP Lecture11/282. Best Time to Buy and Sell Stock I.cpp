//282. Best Time to Buy and Sell Stock I
int maxProfit(vector<int>& prices) {
    int n = prices.size(), prevSmallStockPrices = prices[0],profit = 0;

    for(int i=1;i<n;i++){
        if(prices[i]>prevSmallStockPrices){
            profit = max(profit,prices[i]-prevSmallStockPrices);
        }
        else{
            prevSmallStockPrices = prices[i];
        }
    }
    return profit;
}