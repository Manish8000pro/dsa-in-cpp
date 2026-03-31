class Solution {
public:
    vector<int> minOfMax(vector<int>& arr) {
        // Your code here
        int n = arr.size();
        stack<int>st1;
        vector<int>NGR(n,n);

        //Next Greatest Right

        for(int i=0;i<n;i++){
            while(!st1.empty()&&arr[st1.top()]<=arr[i]){
                NGR[st1.top()]=i;
                st1.pop();
            }
            st1.push(i);
        }

        stack<int>st2;
        vector<int>NGL(n,-1);

        // Next Greatest Left

        for(int i=n-1;i>-1;i--){
            while(!st2.empty()&&arr[st2.top()]<arr[i]){
                NGL[st2.top()]=i;
                st2.pop();
            }
            st2.push(i);
        }

        vector<int>result(n,INT_MAX);

        // element ko unki shi position pe dalne ke liye 

        for(int i=0;i<n;i++){
            int len = NGR[i]-NGL[i]-1;
            result[len-1] = min(result[len-1],arr[i]);
        }

        for(int i = n-2;i>=0;i--){
            result[i] = min(result[i],result[i+1]);
        }

        return result;
    }
  
};