// 496. Magician and Chocolates
class Solution {
public:
    int nchoc(int A, vector<int> &B) {
        // Your code here
        priority_queue<int>pq(B.begin(),B.end());

        long long maxChoco = 0;

        while(A&& pq.size()){
            maxChoco+= pq.top();

            if(pq.top()/2){
                pq.push(pq.top()/2);
            }
            pq.pop(); 

            A--;
            
        }
        return maxChoco%1000000007;
    }
};