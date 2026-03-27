vector<int> firstNegativeWindow(vector<int>& arr, int k) {
    vector<int>result;
    queue<int>q;
    int n = arr.size();

    for(i=0;i<k-1;i++){
        if(arr[i]<0){
            q.push(i);
        }
    }

    for(i=k-1;i<n;i++){
        //if elements is negetive push its index
        if(arr[i]<0){
            q.push(i);
        }

        // should we delete the  front element of queue because it can be out of our window size 

        if(!q.empty()&&(q.front()<=i-k)){
            q.pop();
        }

        if(q.empty()){
            result.push_back(0);
        }
        else{
            result.push_back(arr[q.front()]);
        }
    }
    return result;
}