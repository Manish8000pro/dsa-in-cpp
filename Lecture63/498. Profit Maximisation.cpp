// 498. Profit Maximisation
class Solution {
public:
    int solve(vector<int>& A, int B) {
        // Your code here
        priority_queue<int>pq(A.begin(),A.end());

        int profit = 0;

        while(B&&(pq.size())){
            int ticketPrice = pq.top();
            pq.pop();
            profit+=ticketPrice;

            if(ticketPrice>1){
                pq.push(ticketPrice-1);
            }
            B--;
        }
        return profit;
    }
};