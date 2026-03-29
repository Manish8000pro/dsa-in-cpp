vector<int> maxSlidingWindow(vector<int>& arr, int k) {
    int n = arr.size();
    deque<int>dq;

    // first k-1 element ko deque me dalna h 

    for(int i=0;i<k-1;i++){
        while(!dq.empty()&&arr[dq.back()]<arr[i]){
            dq.pop_back();
        }
        dq.push_back(i);
    }

    vector<int>ans;

    for(int i=k-1;i<n;i++){
        while(!dq.empty()&&arr[dq.back()]<arr[i]){
            dq.pop_back();
        }
        dq.push_back(i);

        // check if first element in dq is out of windoww or not 

        if(dq.front()<=i-k){
            dq.pop_front();
        }
        ans.push_back(arr[dq.front()]);
    }
    return ans;
}