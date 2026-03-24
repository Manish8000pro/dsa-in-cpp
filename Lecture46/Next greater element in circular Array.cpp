class Solution {
public:
    vector<int> nextLargerElement(vector<int>& arr) {
        // Your code here
        int n = arr.size();
        vector<int>nge(n,-1);
        stack<int>st;

        for(int i=2*n-1;i>=0;i--){
            int idx = i%n;

            while(!st.empty()&&st.top()<=arr[idx]){
                st.pop();
            }

            if(i<n){
                if(!st.empty()){
                    nge[i] = st.top();
                }
            }
            st.push(arr[idx]);
        }
        return nge;
    }
};