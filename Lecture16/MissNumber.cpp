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
// }