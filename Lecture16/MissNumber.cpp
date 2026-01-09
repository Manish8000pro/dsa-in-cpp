// int findKthPositive(vector<int>& arr, int k) {
//     // Your code here
// 	int missingNumber = k;
// 	for(int i = 0;i<arr.size();i++){
// 		if(arr[i]>missingNumber){
// 			return missingNumber;
// 		}
// 		else{
// 			missingNumber++;
// 		}
// 	}
// 	return missingNumber;

		// SECOND ANSWER
	// 	int n = arr.size();

	// for(int i=0;i<n;i++){
	// 	int totalMissing = arr[i] - (i+1);

	// 	if(totalMissing>=k){
	// 		return i+k;
	// 	}
	// }
	// return n+k;

			// third ans -===============

			int start = 0,end = arr.size()-1;
	int ans = arr.size();

	while(start<=end){
		int mid = start + (end - start)/2;

		if(arr[mid]-(mid+1)<k){
			start = mid+1;
		}
		else{
			ans = mid;
			end = mid-1;
		}
	}
	return ans+k;
// }