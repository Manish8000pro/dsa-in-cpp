bool allocationPossible(int minDist,vector<int> &stalls, int k){
	int count = 1, cowPositions = stalls[0],n=stalls.size();

	for(int i=1;i<n;i++){
		if(stalls[i]-cowPositions>=minDist){
			count++;
			cowPositions = stalls[i];
		}
	}
	return count>=k;
}

int maxSafeDistance(vector<int> &stalls, int k) {
    // Your code here

	int start=1,end=0,mid,ans,n=stalls.size();

	sort(stalls.begin(),stalls.end());

	end = stalls[n-1]-stalls[0];

	while(start<=end){

		mid = start+(end-start)/2;

		if(allocationPossible(mid,stalls,k)){
			ans = mid;
			start = mid+1;
		}
		else{
			end = mid-1;
		}
	}
	return ans;
    
}