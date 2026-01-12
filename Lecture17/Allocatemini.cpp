bool allocateBook(int maxPages,vector<int> &arr, int k){

	// count: number of students, Pages : unko kitne pages mile h

	int count = 1, pages = arr[0];
	for(int i=1;i<=arr.size();i++){
		pages+=arr[i];
		if(pages>maxPages){
			count++;
			pages = arr[i];
		}
	}

	return count <= k;
}



int findPages(vector<int> &arr, int k) {
    // Your code here

	int n = arr.size();

	if(k>n){
		return -1;
	}
	// Array ka jo maximum hoga
	int start =0;
	int end = 0,ans;
	for(int i = 0; i<n;i++){
		start = Max(start,arr[i]);
		end+=arr[i];
	}

	// while(start){
	// 	if (allocateBook(start,arr,k)){
	// 		return start;
	// 	}
	// 	start++;
	// }


	while(start<=end){
		mid = start + (end - start)/2;
		if(allocateBook(mid,arr,k)){
			ans = mid;
			end = mid-1;
		}
		else{
			start = mid+1;
		}
	}
	return ans;
}
// This gives the compilelation error