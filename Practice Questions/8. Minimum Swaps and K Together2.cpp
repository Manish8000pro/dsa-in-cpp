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