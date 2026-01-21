int trapWater(vector<int>& arr) {
    int n = arr.size();

	int leftMax = 0,rightMax = 0,left = 0,right = n-1,totalWater = 0;

	// Maximum array in element 

	while(left<right)
	{
		//How to increase Left side

		if(arr[left]<arr[right]){
			if(leftMax>arr[left]){
				totalWater+=leftMax-arr[left];
			}
			else{
				leftMax = arr[left];
			}

			left++;
		}
		else{
			if(rightMax>arr[right]){
				totalWater+=rightMax-arr[right];
			}
			else{
				rightMax = arr[right];
			}
			right--;
		}
	
	}
	return totalWater;
}