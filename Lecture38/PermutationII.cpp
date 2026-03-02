class Solution {
public:
    
	void permutation(vector<int>&nums,int index,int n,vector<vector<int>>&ans){

		if(index==n-1){
			ans.push_back(nums);
			return;
		}

		// 21 size ka array lena h 
		vector<bool>used(21,0);  // ye 21 ka array liya h 

		
		for(int i=0;i<n;i++){

			if(!used[nums[i]+10]){
			used[nums[i]+10]=1;
			swap(nums[i],nums[index]);
			permutation(nums,index+1,n,ans);
			swap(nums[i],nums[index]);
			}
		}
	}
	
	
	vector<vector<int>> permuteUnique(vector<int>& nums) {
        // Code here 
		vector<vector<int>>ans;
		permutation(nums,0,nums.size(),ans);

		return ans;
    }
};