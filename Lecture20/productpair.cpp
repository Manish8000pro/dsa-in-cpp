bool isProduct(vector<int>& arr, long long target) {
    // Your code here
    sort(arr.begin(),arr.end());

	int mid = -1,n = arr.size();

	for(int i = 0;i<n;i++){
		if(arr[i]<0){
			mid = i;
		}
		else{
			break;
		}
	}

	if(target>=0){
		// Both lie in the negetive region

		int start = 0,end = mid;
		while(start<end){
			if(arr[start]*arr[end]==target){
				return true;
			}
			else if(arr[start]*arr[end]<target){
				end--;
			}
			else{
				start++;
			}

			// Both number should lie in the positive region

			start = mid+1,end = n-1;
			while(start<end){
				if(arr[start]*arr[end] == target){
					return true;
				}
				else if(arr[start]*arr[end] < target){
					start++;
				}
				else{
					end--;
				}
			}
		}
	}
	else{
		// One number lie in the negetive region and another lie in Positive 

		int start = 0,end = mid+1;

		while(start<=end){
			if(arr[start]*arr[end]== target){
				return true;
			}
			else if(arr[start]*arr[end]>target){
				end++;
			}
			else{
				start++;
			}
		}
	}
	return false;
}