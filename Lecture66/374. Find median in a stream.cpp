// 374. Find median in a stream
class Solution {
public:
    vector<double> getMedian(vector<int>& arr) {
        // Your code here
        priority_queue<int>maxHeapLeft;
        priority_queue<int,vector<int>,greater<int>>minHeapRight;

        vector<double>result;

        for(int x:  arr){
            // left side 

            // right side kr  do 
            if(maxHeapLeft.empty()|| x<=maxHeapLeft.top()){
                maxHeapLeft.push(x);
            }
            else{
                minHeapRight.push(x);
            }

            if(maxHeapLeft.size()>minHeapRight.size()+1){
                minHeapRight.push(maxHeapLeft.top());
                maxHeapLeft.pop();
            }
            else if(maxHeapLeft.size()<minHeapRight.size()){
                maxHeapLeft.push(minHeapRight.top());
                minHeapRight.pop();
            }
            
            if(maxHeapLeft.size()==minHeapRight.size()){
                double ans = maxHeapLeft.top()+minHeapRight.top();
                 ans/=2;
                result.push_back(ans);
            }
            else if(maxHeapLeft.size()>minHeapRight.size()){
                double ans = maxHeapLeft.top();
                result.push_back(ans);
            }
        }
        return result;
    }
};