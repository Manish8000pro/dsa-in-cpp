vector<int> maxOfMin(vector<int>& arr) {
    // your code here
    int n = arr.size();
    stack<int>st1;
    vector<int>NSR(n,n);

    // Next smallest right

    for(int i=0;i<n;i++){
        while(!st1.empty()&&arr[st1.top()]>arr[i]){
            NSR[st1.top()]=i;
            st1.pop();
        }
        st1.push(i);
    }

    // Nest smallest Left

    stack<int>st2;
    vector<int>NSL(n,-1);

    for(int i=n-1;i>-1;i--){
        while(!st2.empty()&&arr[st2.top()]>arr[i]){
            NSL[st2.top()]=i;
            st2.pop();
        }
        st2.push(i);
    }

    vector<int>result(n,0);

    // elements ko unki shi position me dalne ke liye   

    for(int i=0;i<n;i++){
        int len = NSR[i]-NSL[i]-1;
        result[len-1] = max(result[len-1],arr[i]);
    }

    for(int i=n-2;i>=0;i--){
        result[i] = max(result[i],result[i+1]);
    }
    return result;
}