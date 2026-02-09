int countFreq(vector<int>& arr, int target) {
    // Your code here
	int n = arr.size();
	int count = 0;
	for(int i = 0;i<n;i++){
		if(target==arr[i]){
			count++;
		}
	}
	return count;
}