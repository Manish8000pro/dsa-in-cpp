bool isPackagesPossible(int maxCapacity,vector<int> &weights, int days){
	int count = 1,Load = weights[0],n = weights.size();

	for(int i=1;i<n;i++){
		Load+=weights[i];

		if(Load>maxCapacity){
			count++;
			Load = weights[i];
		}
	}
	return count <= days;
}

int shipWithinDays(vector<int> &weights, int days) {
    // Your code here
	int n = weights.size();
	int start = 0,end = 0, ans=end,mid;

	for(int i=0;i<n;i++){
		start = max(start,weights[i]);
		end+=weights[i];
	}

	while(start<=end){
		mid = start+(end-start)/2;
		if(isPackagesPossible(mid,weights,days)){
			ans = mid;
			end = mid-1;
		}
		else{
			start = mid+1;
		}
	}
	return ans;
}