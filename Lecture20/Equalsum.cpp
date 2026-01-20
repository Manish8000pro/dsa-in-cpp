class Solution {
  public:
    vector<int> EqualSum(vector<int> arr) {
        //Code here
		int sum = 0, n = arr.size();

		// Sum of all arrays 

		for(int i = 0;i<n;i++){
			sum+=arr[i];
		}

		int leftSum  = 0, rightSum;
		// 0; real value 1:index of the element 2:leftSubarray(1),rightSubarray(2)

		vector<int>ans(3);
		ans[0] = INT_MAX;

		for(int i=0;i<n-1;i++){
			leftSum+=arr[i];
			rightSum = sum-leftSum;

			if(abs(leftSum-rightSum)>ans[0])
			continue;

			if(rightSum>leftSum){
				ans[2] = 1;
				ans[0] = rightSum-leftSum;
				ans[1] = i+2;
			}
			else{
				ans[2] = 2;
				ans[0] = leftSum-rightSum;
				ans[1] = i+2;
			}
		}
		return ans;
    }
};