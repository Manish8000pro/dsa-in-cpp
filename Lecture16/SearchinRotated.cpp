int search(vector<int>& arr, int key) {
    // Your code here

	int n = arr.size()-1;

	int left = 0, right = n;

	while(left<=right){

		int mid = left + (right-left)/2;

		if(arr[mid]==key){
			return mid;
		}
		// left portion
		else if(arr[mid]>=arr[0]){

			// left to mid ye sorted hoga, agar key inke beech mein hai, to      muje   left side jaana hoga
			if(key>=arr[left]&&key<arr[mid]){
				right = mid-1;
			}
			else{
				left = mid+1;
			}

		}
		else{
            
			// mid to right ye sorted hoga, agar wo inke beech mein hai, toh muje right side jaana hai
			if(key>arr[mid]&&key<=arr[right]){
				left = mid+1;
			}
			else{
				right = mid-1;
			}
		}

		// right portion
	}


	return -1;
}