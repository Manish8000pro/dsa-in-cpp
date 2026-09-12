//479. Construct Target Array With Multiple Sums
// Time complexity o(k logn)
// Space complexity o(n);
class Solution {
public:
    bool isPossible(vector<int>& target) {
        // Code here
        priority_queue<long long>pq;

        long long sum = 0;

        for(int x:target){
            sum+=x;
            pq.push(x);
        }

        while(true){
            long long largest = pq.top();
            pq.pop();

            // Already reachable 
            if(largest==1)
            return true;

            long long rest = sum-largest;

            // if largest < rest
            if(largest<rest)
            return false;

            // No other elements
            if(rest==0)
            return false;

            // other elements are 1 
            if(rest==1)
            return true;

            // previous must be +ve

            long long previous = largest%rest;

            if(previous==0)
            return false;

            pq.push(previous);
            sum = rest+previous;
        }
    }
};