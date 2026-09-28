//8. Minimum Swaps and K Together
int minSwaps(vector<int>& arr, int k) {
    int n = arr.size();

    int good = 0;

    for(int num: arr){
        if(num<=k){
            good++;
        }
    }

    if(good==0 || good==1)
    return 0;


    int ans = INT_MAX;

    for(int i =0;i<=n-good;i++){
        int bad = 0;
        for(int j=i;j<i+good;j++){
            if(arr[j]>k){
                bad++;
            }
        }
        
        ans = min(ans,bad);
    }

    return ans;
}
