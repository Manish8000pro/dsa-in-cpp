// 123. Number of Subarrays Having Sum Less Than K
int countSubarrays(vector<int>& arr, int k) {
    int sum = 0,left = 0 ,right = 0, count = 0, n = arr.size();

    while(right<n){
        sum+= arr[right];

        // if my sum becomes greater than equl to k ,I have to decrease window size
        while(sum>=k){
            sum-=arr[left];
            left++;
        }
        // my sum is less than k 
        count+=(right-left+1);
        right++;
    }
    return count;
}