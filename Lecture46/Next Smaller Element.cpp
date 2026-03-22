class Solution {
public:
    vector<int> nextSmallerElement(vector<int> &arr, int n) {
        // Your code here
    stack<int>st;
    vector<int>ans(arr.size(),-1);

    for(int i=0;i<arr.size();i++){
        while(!st.empty()&&arr[i]<arr[st.top()]){
            ans[st.top()]=arr[i];
            st.pop();
        }

        st.push(i);
    }
    return ans;
    }
};