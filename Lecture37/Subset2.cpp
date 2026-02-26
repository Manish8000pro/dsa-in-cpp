class Solution {
public:
    
	void findSubset(vector<int>& nums,int index,int n,vector<int>&temp,vector<vector<int>>&ans){
		// base condition 
		if(index==n){
			ans.push_back(temp);
			return;
		}
		// dekho me value ko add kr rha hu or left side jaa rha hun
		temp.push_back(nums[index]);
		findSubset(nums,index+1,n,temp,ans);
		temp.pop_back();

		// ek baar value ko nhi add kr rha 
		findSubset(nums,index+1,n,temp,ans);

		// // ek baar value ko add nhi kiya 
		// findSubset(nums,index+1,n,temp,ans);
		// temp.push_back(nums[index]);

		// // ek baar insert kr diya 
		// findSubset(nums,index+1,n,temp,ans);
		// temp.pop_back();
	}
	
	vector<vector<int>> subsets(vector<int>& nums) {
        // Your code here
		vector<vector<int>>ans;
		vector<int>temp;

		findSubset(nums,0,nums.size(),temp,ans);
		return ans;
    }
};