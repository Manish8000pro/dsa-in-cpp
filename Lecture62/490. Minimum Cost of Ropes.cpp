// 490. Minimum Cost of Ropes
class Solution {
public:
    long long minCost(vector<long long>& arr) {
        // code here
        priority_queue<long long,vector<long long>,greater<long long>> pq(arr.begin(),arr.end());

        long long cost = 0;

        while(pq.size()>1){
            // first minimum element 
            int first = pq.top();
            pq.pop();

            int second = pq.top();
            pq.pop();

            cost+= first+second;
            pq.push(first+second);
        }
        return cost;
        
    }
};