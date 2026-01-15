bool splitArrays(int maxArrays,vector<int> &arr, int k){
	int count = 1,arrays = arr[0];
	int n = arr.size();

	for(int i=1;i<n;i++){
		arrays+=arr[i];
		if(arrays>maxArrays){
			count++;
			arrays = arr[i];
		}
	}
	return count <=k;
}

int splitArray(vector<int> &arr, int k) {
    // Your code here
	int n = arr.size();

	if(k>n){
		return -1;
	}

	// Array jo Maximum hoga

	int start = 0, end = 0,ans,mid;

	for(int i=0;i<n;i++){
		start = max(start,arr[i]);
		end+=arr[i];
	}

	while(start<=end){

		mid = start+(end-start)/2;

		if(splitArrays(mid,arr,k)){
			ans = mid;
			end = mid-1;
		}
		else{
			start = mid+1;
		}
	}
	return ans;

}