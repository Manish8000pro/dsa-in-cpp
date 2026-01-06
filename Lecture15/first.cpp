// Peak Index in a Mountain Array

int peakIndexInMountainArray(vector<int>& arr) {
    // Your code here

	int start = 0,end = arr.size()-1;
	
	while(start<=end){
		int mid = end+(start-end)/2;
		// answer find, peak element condition
		if(arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1]){
			return mid;
		}

		// increasing order array

		else if(arr[mid]>arr[mid-1]){
			start = mid+1;
		}
		else{
			end = mid-1;
		}
   }
   return -1;
}