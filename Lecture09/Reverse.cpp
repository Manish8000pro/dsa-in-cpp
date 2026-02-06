void reverseArray(vector<int>& arr) {
	
	int n = arr.size();

	for(int i=0;i<n/2;i++){
		int temp = arr[i];
		arr[i] = arr[n-1-i];
		arr[n-1-i] = temp;
	}
}

//second sol. of Reverse array problem

// int left = 0,right = arr.size()-1;

// while (left<right)
// {
// 	swap(arr[left],arr[right]){
// 		left++;
// 		right--;
// 	}
// }
