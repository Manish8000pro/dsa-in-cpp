//11. Push Negatives Back
vector<int> moveNegativesToEnd(vector<int>& arr) {
    // Your code here
    vector<int>ans;

    for(int i=0;i<arr.size();i++){
        if(arr[i]>=0){
            ans.push_back(arr[i]);
        }
    }

    for(int i=0;i<arr.size();i++){
        if(arr[i]<0){
            ans.push_back(arr[i]);
        }
    }
    return ans;
}