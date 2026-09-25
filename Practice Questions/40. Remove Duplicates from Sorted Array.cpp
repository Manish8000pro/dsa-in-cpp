//40. Remove Duplicates from Sorted Array
// Time complexity  o(n)
int removeDuplicates(vector<int>& arr) {
    // Your code here
    int n  = arr.size();
    if(n==0)
    return 1;
    
    int count = 1;

    for(int i=1;i<n;i++){
        if(arr[i]==arr[i-1])
        continue;
        else{
            count++;
        }
    }
    return count;
}