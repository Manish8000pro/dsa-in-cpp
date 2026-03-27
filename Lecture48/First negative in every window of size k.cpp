vector<int> firstNegativeWindow(vector<int>& arr, int k) {
    
    vector<int>result;
    queue<int>q;
    int n = arr.size();
    // first insert first k-1 element into our queue

    for(int i=0;i<k-1;i++){
        if(arr[i]<0){
            q.push(i);
        }
    }


    for(int i=k-1;i<n;i++){
        // if element is negative, push its index
        if(arr[i]<0){
            q.push(i);
        }

        // should we delete the front element of queue because it can be out of our current window size
        if(!q.empty()&&(q.front()<=i-k)){
            q.pop();
        }


        // if q.front contain any index, push its value into our array, else push 0 into array(result)

        if(q.empty()){
            result.push_back(0);
        }
        else{
            result.push_back(arr[q.front()]);
        }

    }


    return result;


    
}