// 500. Number of Subarrays Having Sum Greater Than or Equal to K
long long countSubarrays(vector<int>& arr, int k) {
    if(k==0){
        return arr.size()*(arr.size()+1)/2;
        // sum of first n natural number
    }
    long long count = 0, windowSum = 0;
    int left = 0, right = 0, n = arr.size();

    while(right<n){
        windowSum+= arr[right];

        while(windowSum >= k){
            count+=(n-right);
            // now decrease the size of window

            windowSum-=arr[left];
            left++;
        }
        right++;
    }
    return count;
}