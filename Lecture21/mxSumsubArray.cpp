int maxSubarraySum(vector<int> &arr) {
    // Your code here
    int n = arr.size();
	int maxSum = INT_MIN,subSum = 0;

	for(int i=0;i<n;i++){
		// ager mujse se phle wale negetive hue to me add nhi hovunga
		if(subSum<0){
			subSum = arr[i];
		}
		else{
			subSum+=arr[i];
		}

		maxSum = max(maxSum,subSum);
	}
	return maxSum;
}