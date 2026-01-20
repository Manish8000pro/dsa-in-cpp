int maxDiff(vector<int> &arr) {
    // Your code here
    int n = arr.size();
	vector<int>suffixMax(n);

	suffixMax[n-1] = arr[n-1];

	for(int i=n-2;i>-1;i--){
    suffixMax[i] = max(arr[i],suffixMax[i+1]);
	}
	
    // Solution Find kro 

    int ans = -1;

    for(int i=0;i<n-1;i++){
        if(suffixMax[i+1]>arr[i]){
            ans = max(ans,suffixMax[i+1]-arr[i]);
        }
    }
    return ans;

}