vector<int> twoSum(vector<int>& nums, int target) {
    // Your code here
	vector<int>ans;
	int n = nums.size();

   for( int i = 0;i<n-1;i++){
	for(int j =1;j<n;j++){
		if(nums[i]+nums[j]==target){
			return {i,j};
		}
	}
   }
   return {};
}
// thsi gives the error