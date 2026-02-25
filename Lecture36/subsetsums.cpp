// Q.86 subsetSum 

void findSubsetSum(vector<int>&arr,int index,int n,int sum,vector<int>&ans){
	// base condition 
	if(index==n){
		ans.push_back(sum);
		return;
	}

	// ya to number ko add kr do sum me or aage bad jao
	findSubsetSum(arr,index+1,n,sum+arr[index],ans);
	// ya to number ko add mat kro sum me or aage bad jao
	findSubsetSum(arr,index+1,n,sum,ans);
}

vector<int> subsetSums(vector<int>& arr) {
    // Your code here

	vector<int>ans;
	findSubsetSum(arr,0,arr.size(),0,ans);
	return ans;
}