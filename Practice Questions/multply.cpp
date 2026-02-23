vector<int> productExceptSelf(vector<int>& nums) {
    // code here
    // multiply others
	int n = nums.size();
	vector<int>mul(n,1);

	 int prefix = 1;

	for(int i=0;i<n;i++){
		mul[i]=prefix;
		prefix*=nums[i];
	}

	 int suffix = 1;
	for(int i=n-1;i>=0;i--){
		mul[i]*=suffix;
		suffix*=nums[i];
	}
	
	return mul;
}