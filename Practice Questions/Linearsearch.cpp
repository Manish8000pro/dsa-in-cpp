int linear(vector<int>& arr, int start, int n, int target) {
    // base condition
    if(start == n){
        return -1;
    }

    if(arr[start] == target){
        return start;
    }

    return linear(arr, start + 1, n, target);
}

int linearSearch(vector<int>& arr, int target) {
    return linear(arr, 0, arr.size(), target);
}
